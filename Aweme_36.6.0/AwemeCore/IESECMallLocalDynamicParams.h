@class NSDictionary;

@interface IESECMallLocalDynamicParams : NSObject

@property (copy, nonatomic) NSDictionary *tabsParams;
@property (copy, nonatomic) NSDictionary *normalParams;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL enableNativeDynamicParams;

- (BOOL)useNativeFilters:(id)a0;
- (void)updateLocalParamsByTabId:(long long)a0 params:(id)a1;
- (void)syncLocalDynamicParams:(id)a0 type:(long long)a1;
- (id)getLocalDynamicParamsWithApiKeys:(id)a0 paramsContext:(id)a1 pageName:(id)a2;
- (void).cxx_destruct;

@end
