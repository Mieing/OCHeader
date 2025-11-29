@class NSString;

@interface MiniTaskUIRecentUseRecord : MMObject <PBCoding>

@property (copy, nonatomic) NSString *taskInnerKey;
@property (nonatomic) unsigned int lastUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_taskInnerKey;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
