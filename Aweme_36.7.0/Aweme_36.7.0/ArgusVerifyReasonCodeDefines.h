@interface ArgusVerifyReasonCodeDefines : NSObject

+ (id)codeToStringWithAspect:(long long)a0 reasonCode:(id)a1;
+ (id)reasonCodeStringMap;
+ (id)defineReasonCodeStringMap;
+ (id)_commonReasonCodeStringMap;
+ (id)_webLoadReasonCodeStringMap;
+ (id)_webViewCsrfUAReasonCodeStringMap;
+ (id)_lynxLoadTemplateReasonCodeStringMap;
+ (id)_prefetchReasonCodeStringMap;

@end
