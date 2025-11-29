@class NSString, NSMutableArray;

@interface StoreEmotionProductIdListObject : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *pids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pids;
+ (void)initialize;
+ (id)instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;

- (id)getPBPropertyTable;
- (id)init;
- (void)savePidsToFile:(id)a0;
- (void)savePidToFile:(id)a0;
- (id)getPids;
- (void)deletePid:(id)a0;
- (void)addFirstPid:(id)a0;
- (void).cxx_destruct;

@end
