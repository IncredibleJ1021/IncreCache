# IncreCache

IncreCache 是一个用 C++ 实现的高性能缓存算法库，提供多种常见缓存策略，包括：

- **LRU** (Least Recently Used)
- **LFU** (Least Frequently Used)
- **ARC** (Adaptive Replacement Cache)
- **LRU-K**
- **LFU-Aging**

库设计目标是**高效、可扩展、易于集成**，适合用于需要缓存优化的系统和项目中。

---

## 特性

- 支持多种缓存策略，适应不同访问模式
- 高效的缓存操作，支持大量并发访问
- 可通过模板自定义 Key 和 Value 类型
- 内置测试用例，支持热点访问、循环扫描和工作负载变化的模拟测试

---

## 安装

1. 克隆仓库：

```bash
git clone https://github.com/IncredibleJ1021/IncreCache.git
cd IncreCache
```

2. 使用 camke 构建：

```bash
mkdir build 
cd build
cmake ..
make
```
