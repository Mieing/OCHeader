@class NSMutableDictionary, NSMutableSet;

@interface MMWebViewPlugin_WebApiControl : MMWebViewPluginBase

@property (nonatomic) unsigned int curMinInJsapiFrequencyBase;
@property (retain, nonatomic) NSMutableDictionary *dictInvokeCountInMin;
@property (retain, nonatomic) NSMutableDictionary *dictJsapiFrequencyLimitCount;
@property (retain, nonatomic) NSMutableSet *setJsApiIndexForFrequnceLimit;

+ (BOOL)isJsApiCompatibileInChildMode:(id)a0;

- (id)init;
- (void)initFrequnceLimitSet;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (BOOL)frequencyCheckResultWhenJsApiInvoked:(id)a0 funcName:(id)a1;
- (BOOL)compatibilityCheckResultWhenJsApiInvoked:(id)a0;
- (void).cxx_destruct;

@end
