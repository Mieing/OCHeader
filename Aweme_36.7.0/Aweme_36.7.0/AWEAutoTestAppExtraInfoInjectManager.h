@interface AWEAutoTestAppExtraInfoInjectManager : NSObject

+ (BOOL)isAutoTest;
+ (void)_addCommonParams:(id)a0;
+ (void)addCommonQueryParams:(id)a0 value:(id)a1;
+ (void)addCommonQueryParamsDict:(id)a0;
+ (void)clearCommonQueryParams;

- (id)init;

@end
