@class NSString, NSMutableDictionary, CachalotContext;

@interface AWESearchCachalotCardPipeline : NSObject <CachalotRenderPipeline>

@property (retain, nonatomic) NSMutableDictionary *dataMap;
@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) CachalotContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPipeline;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (id)transformRenderInfoItem:(id)a0;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (id)generateComponentContextWithComponentViewModel:(id)a0;
- (void)registerDataType:(long long)a0 dataClass:(Class)a1;
- (void)registerViewType:(long long)a0 viewClass:(Class)a1;
- (unsigned long long)renderType;
- (void).cxx_destruct;
- (id)init;

@end
