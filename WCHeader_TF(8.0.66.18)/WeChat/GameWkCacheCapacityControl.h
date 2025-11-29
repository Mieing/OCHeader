@interface GameWkCacheCapacityControl : WXPBGeneratedMessage

@property (nonatomic) unsigned long long minResidentMemory;
@property (nonatomic) unsigned long long minResidentDisk;
@property (nonatomic) unsigned long long cacheMemoryCapacity;
@property (nonatomic) unsigned long long cacheDiskCapacity;

+ (void)initialize;

- (void)setCacheDiskCapacity:(unsigned long long)a0;
- (unsigned long long)cacheDiskCapacity;
- (void)setCacheMemoryCapacity:(unsigned long long)a0;
- (unsigned long long)cacheMemoryCapacity;
- (void)setMinResidentDisk:(unsigned long long)a0;
- (unsigned long long)minResidentDisk;
- (void)setMinResidentMemory:(unsigned long long)a0;
- (unsigned long long)minResidentMemory;

@end
