@class NSString, MemoryMappedKV;

@interface MagicBrushMMKVStorage : NSObject

@property (copy, nonatomic) NSString *mBizName;
@property (retain, nonatomic) MemoryMappedKV *mMemoryMappedKV;
@property (nonatomic) unsigned long long mMaxStorageSize;

- (id)initWithBizName:(id)a0 bizName:(id)a1 prefix:(id)a2;
- (id)getAllKeys;
- (id)get:(id)a0;
- (id)set:(id)a0 data:(id)a1 dataType:(id)a2;
- (id)remove:(id)a0;
- (void)clear;
- (id)setInner:(id)a0 data:(id)a1 dataType:(id)a2 dataSize:(long long)a3 checkQuota:(BOOL)a4;
- (long long)calculateDataSize:(id)a0 data:(id)a1;
- (long long)getDataSize:(id)a0;
- (BOOL)willReachQuota:(long long)a0;
- (long long)getQuota;
- (long long)appendTotalDataSize:(long long)a0;
- (void)setTotalDataSize:(id)a0 size:(long long)a1;
- (long long)getTotalDataSize;
- (id)splitValue:(id)a0;
- (void).cxx_destruct;

@end
