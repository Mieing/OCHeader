@class _TtC8TempoiOS23TempoEngineStaticConfig;

@interface TempoiOS.TempoEngine : NSObject <NSObject> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ globalProps;
    void /* unknown type, empty encoding */ cacher;
    void /* unknown type, empty encoding */ widgetMap;
    void /* unknown type, empty encoding */ env;
    void /* unknown type, empty encoding */ appMethodModule;
    void /* unknown type, empty encoding */ methodManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sizeQueue;
    void /* unknown type, empty encoding */ attributeImplProxyList;
}

@property (class, nonatomic, retain) _TtC8TempoiOS23TempoEngineStaticConfig *staticConfig;

+ (id)SDKVersion;
+ (BOOL)registerTemplateProviderWithTemplateProvider:(id)a0;
+ (BOOL)registerResourceProviderWithResourceProvider:(id)a0;
+ (void)publishEventWithName:(id)a0 params:(id)a1;
+ (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
+ (void)removeObserver:(id)a0 name:(id)a1;
+ (void)removeObserver:(id)a0;
+ (BOOL)isTemplateDataLocalWithTemplate:(id)a0;
+ (void)preloadTemplateListWithTemplateList:(id)a0 complete:(id /* block */)a1;
+ (void)asyncPreloadTemplateListWithTemplateList:(id)a0 complete:(id /* block */)a1;

- (void)registerLogRecipientWithRecipient:(id)a0;
- (BOOL)registerAPPMethodWithName:(id)a0 impl:(id /* block */)a1 options:(long long)a2;
- (BOOL)registerMethodWithModuleName:(id)a0 name:(id)a1 impl:(id /* block */)a2 options:(long long)a3;
- (BOOL)registerOCWidgetWithEntity:(id)a0 name:(id)a1;
- (id)sizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0 template:(id)a1 uniqueID:(id)a2 data:(id)a3;
- (void)asyncSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0 template:(id)a1 uniqueID:(id)a2 data:(id)a3 complete:(id /* block */)a4;
- (void)preloadTemplateListWithTemplateList:(id)a0 complete:(id /* block */)a1;
- (void)asyncPreloadTemplateListWithTemplateList:(id)a0 complete:(id /* block */)a1;
- (void)preloadWithUrl:(id)a0 data:(id)a1;
- (id)rootViewWithTemplate:(id)a0 uniqueID:(id)a1 data:(id)a2 size:(struct CGSize { double x0; double x1; })a3 preRootView:(id)a4;
- (id)rootViewWithTemplate:(id)a0 uniqueID:(id)a1 data:(id)a2 size:(struct CGSize { double x0; double x1; })a3 delegate:(id)a4 preRootView:(id)a5;
- (void)rootViewWillShow:(id)a0;
- (void)rootViewCompleteShow:(id)a0;
- (void)rootViewEndShow:(id)a0;
- (void)offloadWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
