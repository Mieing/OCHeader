@class IESECLiveSliceViewManager, NSMutableDictionary;

@interface IESECLiveSliceViewPool : NSObject

@property (retain, nonatomic) IESECLiveSliceViewManager *manager;
@property (retain, nonatomic) NSMutableDictionary *reusableSliceViews;

- (void)setServerTime:(unsigned long long)a0;
- (unsigned long long)getCurrentServerTimeMs;
- (void)preloadSliceTemplateURLs:(id)a0 needCreateViews:(BOOL)a1;
- (void)registerSliceContextServiceWithKey:(id)a0 service:(id)a1;
- (void)getSliceViewWrapperWithTemplateURL:(id)a0 data:(id)a1 onCompletion:(id /* block */)a2;
- (void)preloadSliceTemplates:(id)a0 needCreateViews:(BOOL)a1;
- (void)preloadSliceTemplateWithURL:(id)a0 templateName:(id)a1 needCreateView:(BOOL)a2;
- (void)unregisterSliceContextServiceWithKey:(id)a0;
- (id)getSliceContextServiceWithKey:(id)a0;
- (id)generateDefaultJsonTemplateName:(id)a0;
- (id)getSliceViewWrapperWithTemplateJson:(id)a0 templateName:(id)a1 data:(id)a2 error:(id *)a3;
- (id)generatePoolKeyForTemplateJson:(id)a0;
- (id)popReusableSliceViewWrapperForPoolKey:(id)a0;
- (id)generateDefaultURLTemplateName:(id)a0;
- (void)getSliceViewWrapperWithTemplateURL:(id)a0 templateName:(id)a1 data:(id)a2 onCompletion:(id /* block */)a3;
- (id)generatePoolKeyForTemplateURL:(id)a0;
- (id)getReusableSliceViewWrappersForPoolKey:(id)a0;
- (id)getSliceViewWrapperWithTemplateJson:(id)a0 data:(id)a1 error:(id *)a2;
- (void)reclaimSliceViewWrapper:(id)a0;
- (void)preloadSliceTemplateURL:(id)a0 needCreateView:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
