@class NSString;

@interface AWELocationInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;
+ (void)setLocationInitConfig;
+ (void)execute;

- (id)aAWEInfraConfigModuleServiceCommonAdapter;

@end
