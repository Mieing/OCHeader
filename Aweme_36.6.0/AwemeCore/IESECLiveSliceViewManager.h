@class NSMapTable;
@protocol SLICancelable, IESECSliceXInstanceInterface;

@interface IESECLiveSliceViewManager : NSObject

@property (retain, nonatomic) NSMapTable *sliceViews;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceInstance;
@property (weak, nonatomic) id<SLICancelable> slicePrecreateOperationCancelable;

- (void)triggerSliceXEvent:(id)a0;
- (void)setServerTime:(unsigned long long)a0;
- (unsigned long long)getCurrentServerTimeMs;
- (void)registerSliceContextServiceWithKey:(id)a0 service:(id)a1;
- (id)createSliceInstance;
- (void)updateSliceView:(id)a0 withData:(id)a1 onCompletion:(id /* block */)a2;
- (id)validateSliceViewBelongsToThisManager:(id)a0;
- (void)bindSliceDataSource:(id)a0 toLiveSliceView:(id)a1 error:(id *)a2;
- (void)bindSliceDataSource:(id)a0 toLiveSliceView:(id)a1 onCompletion:(id /* block */)a2;
- (void)updateSliceView:(id)a0 withNewViewID:(id)a1;
- (void)preloadSliceTemplates:(id)a0 needCreateViews:(BOOL)a1;
- (id)createSliceConfigContext;
- (id)createSliceViewWithTemplateName:(id)a0 templateVersion:(id)a1 templateJson:(id)a2 data:(id)a3 error:(id *)a4;
- (void)createSliceViewWithTemplateName:(id)a0 templateVersion:(id)a1 templateURL:(id)a2 data:(id)a3 onCompletion:(id /* block */)a4;
- (void)updateSliceView:(id)a0 withData:(id)a1 error:(id *)a2;
- (void)resetSliceView:(id)a0 withData:(id)a1 error:(id *)a2;
- (void)resetSliceView:(id)a0 withData:(id)a1 onCompletion:(id /* block */)a2;
- (void)preloadSliceTemplateWithURL:(id)a0 templateName:(id)a1 needCreateView:(BOOL)a2;
- (void)unregisterSliceContextServiceWithKey:(id)a0;
- (id)getSliceContextServiceWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
