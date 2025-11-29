@class NSString, NSMutableArray, NSMutableDictionary;

@interface IESGCPStorageService_Douyin : NSObject <IESGCPStorageService>

@property (retain, nonatomic) NSMutableArray *memoryBoolStorage;
@property (retain, nonatomic) NSMutableDictionary *memoryIntegerStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordDiskHasStoredWithKey:(id)a0;
- (BOOL)hasDiskStoredWithKey:(id)a0;
- (void)recordSingleFreqToDiskWithKey:(id)a0;
- (long long)getDiskFreqWithKey:(id)a0;
- (void)recordDoubleToDiskWithKey:(id)a0 data:(double)a1;
- (double)getDiskDoubleValueWithKey:(id)a0;
- (void)recordArrayDataToDiskWithKey:(id)a0 data:(id)a1;
- (void)recordIntegerToDiskWithKey:(id)a0 data:(long long)a1;
- (id)getDiskArrayDataWithKey:(id)a0;
- (long long)getDiskIntegerDataWithKey:(id)a0;
- (void)recordMemoryHasStoredWithKey:(id)a0;
- (BOOL)hasMemoryStoredWithKey:(id)a0;
- (void)recordSingleFreqToMemoryWithKey:(id)a0;
- (long long)getMemoryFreqWithKey:(id)a0;
- (void)removeDiskStoredWithKey:(id)a0;
- (void).cxx_destruct;

@end
