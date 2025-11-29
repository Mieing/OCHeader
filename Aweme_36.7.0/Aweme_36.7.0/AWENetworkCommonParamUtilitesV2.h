@interface AWENetworkCommonParamUtilitesV2 : NSObject

+ (id)commonParameters;
+ (id)fetchCurrentNetworkStatus;
+ (id)commonParamsWithoutL0;
+ (id)buildConsistentCommonParams;
+ (id)buildDynamicCommonParams;
+ (id)buildDynamicCommonParamsL0;

@end
