#pragma once

namespace IncreCache {
template <typename Key, typename Value>
class ICachePolicy {
   public:
    virtual ~ICachePolicy() {};

    // 添加缓存接口
    virtual void put(Key key, Value value) = 0;

    // key是传入参数 访问到的值以传出参数的形式返回 ｜ 访问成功返回 true
    virtual bool get(Key key, Value& value) = 0;

    // 如果缓存中能找到参数 key，则直接返回 true
    virtual Value get(Key key) = 0;
};
}  // namespace IncreCache
