@interface CSJWebViewSetting : NSObject

+ (void)doInitialize;
+ (id)_contentTypeOfExtension:(id)a0;
+ (id)getSettingHeaders;
+ (void)registerPrefix:(id)a0 prefixUrl:(id)a1;
+ (id)getRegisterPrefix:(id)a0;
+ (id)buildRequestHeadersWithUrl:(id)a0;

@end
