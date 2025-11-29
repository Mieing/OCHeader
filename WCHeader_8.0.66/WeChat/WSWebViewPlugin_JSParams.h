@class NSDictionary;

@interface WSWebViewPlugin_JSParams : WSWebViewPluginBase {
    void /* unknown type, empty encoding */ dynamicParams;
    void /* unknown type, empty encoding */ extReqParamDict;
}

@property (nonatomic, copy) NSDictionary *dynamicParams;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)renewExtReqParamsWith:(id)a0;
- (void)setPermanentExtReqParamsWith:(id)a0;
- (id)mergeExtReqParamsWith:(id)a0;
- (void)addExtReqParamFor:(id)a0 value:(id)a1;
- (void)setDynamicValue:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
