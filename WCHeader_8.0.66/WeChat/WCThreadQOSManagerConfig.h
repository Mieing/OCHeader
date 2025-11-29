@class NSString;

@interface WCThreadQOSManagerConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enableDynamicQOS;
@property (nonatomic) BOOL enableGlobalQueue;
@property (nonatomic) BOOL enablePowerSaveMode;
@property (nonatomic) unsigned int jscQOS;
@property (retain, nonatomic) NSString *qosStrategyStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enableDynamicQOS;
+ (void)PBArrayAdd_enableGlobalQueue;
+ (void)PBArrayAdd_enablePowerSaveMode;
+ (void)PBArrayAdd_jscQOS;
+ (void)PBArrayAdd_qosStrategyStr;
+ (void)initialize;

@end
