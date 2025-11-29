@class AWESearchCachalotWebConfig, CachalotContext, NSString;

@interface AWESearchCachalotWebPipeline : NSObject <CachalotRenderPipeline>

@property (retain, nonatomic) AWESearchCachalotWebConfig *webConfig;
@property (retain, nonatomic) CachalotContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)syncGetSearchGeneralCardAddLimitHeightAbility;
+ (BOOL)enableWebPipeLineLimiteHeight;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (id)transformRenderInfoItem:(id)a0;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (id)generateComponentContextWithComponentViewModel:(id)a0;
- (unsigned long long)renderType;
- (id)initWithCustomWebConfig:(id)a0;
- (void).cxx_destruct;

@end
