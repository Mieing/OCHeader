@class NSMutableDictionary, CachalotContext, NSString, CachalotErrorMonitor;

@interface CachalotRenderPipeline : NSObject <CachalotRenderPrivatePipeline>

@property (retain, nonatomic) NSMutableDictionary *registeredPipelines;
@property (weak, nonatomic) CachalotContext *context;
@property (retain, nonatomic) CachalotErrorMonitor *errorMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportThreadSizeMeasureControlWithViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (BOOL)subThreadSizeMeasureWithViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (BOOL)supportAsyncComponentViewSizeMeasureWithViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (void)asyncComponentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1 forRenderType:(unsigned long long)a2 errorCode:(unsigned long long *)a3 sizeBlock:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1 forRenderType:(unsigned long long)a2 errorCode:(unsigned long long *)a3;
- (id)generateComponentContextWithComponentViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (id)componentViewWithViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1 forRenderType:(unsigned long long)a2;
- (id)reuseIdentifierWithViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1 forRenderType:(unsigned long long)a2;
- (BOOL)universalReusePoolAllowViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (BOOL)disablePreRenderViewModel:(id)a0 forRenderType:(unsigned long long)a1;
- (void)registerPipeline:(id)a0;
- (id)transformRenderInfoItem:(id)a0 forRenderType:(unsigned long long)a1 errorCode:(unsigned long long *)a2;
- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1 forRenderType:(unsigned long long)a2 errorCode:(unsigned long long *)a3;
- (void).cxx_destruct;
- (id)init;

@end
