@interface CJPayAnnieSchemaMapper : NSObject

+ (id)formatUrlString:(id)a0;
+ (id)extractChannelBundleWithUrlString:(id)a0 prefix:(id)a1;
+ (id)mapCJSchemaToAnnie:(id)a0 context:(id)a1;
+ (BOOL)isPostRequest:(id)a0;
+ (BOOL)p_shouldEvaluateFontScaleJS:(id)a0;
+ (id)postData:(id)a0;
+ (id)postFields:(id)a0;
+ (id)_fixCJSchemaWithURLString:(id)a0;
+ (id)_convertCJQueryToAnnieWithURLString:(id)a0 context:(id)a1;
+ (void)p_prepareWebViewStyle:(id)a0;
+ (id)_appendCommonQueryParamsIfNeeded:(id)a0 context:(id)a1;
+ (id)_convertToAnnieQueryItemWithKey:(id)a0 value:(id)a1 context:(id)a2;
+ (id)p_tryFilterHttpRequestWithUrl:(id)a0;
+ (id)p_tryReplaceURLHosts:(id)a0;
+ (BOOL)p_matchedPathListWithUrl:(id)a0;
+ (id)p_schemaParamsWithUrl:(id)a0;
+ (id)addChannelBundleToUrl:(id)a0;
+ (id)matchedPrefixWithUrl:(id)a0;
+ (BOOL)p_isNeedForceHttpsWithUrl:(id)a0;
+ (void)p_adaptWebViewStyleByThemeSettingFrom:(id)a0 context:(id)a1;
+ (void)p_updateWebViewStyle:(id)a0;
+ (BOOL)p_shouldUseSettingsFontScale:(id)a0;
+ (BOOL)p_shouldEnableFontScale:(id)a0;
+ (BOOL)p_isDisableFontScale:(id)a0;

@end
