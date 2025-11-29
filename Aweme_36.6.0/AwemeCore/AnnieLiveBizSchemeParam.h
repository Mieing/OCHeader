@class NSString, NSDictionary, BDXPageModel, BDXPopupModel;

@interface AnnieLiveBizSchemeParam : BDXSchemaParam <BDXPageSchemaParamProtocol, BDXPopupSchemaParamProtocol>

@property (copy, nonatomic) NSString *initialData;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL useWkFalcon;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL enableCanvasOptimize;
@property (nonatomic) long long closeIconPosition;
@property (nonatomic) long long iconTheme;
@property (nonatomic) BOOL showFloatLive;
@property (copy, nonatomic) NSString *pageTag;
@property (copy, nonatomic) NSDictionary *liveRouterParam;
@property (retain, nonatomic) BDXPageModel *pageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDXPopupModel *popupModel;
@property (nonatomic) BOOL adaptAppTheme;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)paramWithSchemaData:(id)a0;
+ (BOOL)downlineLiveColorLogic:(id)a0;

- (BOOL)isLightModeForPageWithSchemaParam:(id)a0;
- (long long)modeForPageWithSchemaParam:(id)a0;
- (BOOL)isPadAdaptionMode:(id)a0;
- (BOOL)isUrlInLightAdapterAllowList:(id)a0;
- (void)updateWithSchemaData:(id)a0;
- (id)liveContextWithSchemaData:(id)a0;
- (void)updatePopupParams:(id)a0 internalModel:(id)a1;
- (void)updatePageParams:(id)a0 internalModel:(id)a1;
- (double)defaultWidth:(id)a0;
- (double)defaultHeight:(id)a0;
- (double)viewBottomMargin:(id)a0;
- (double)horizontalSafeAreaHieght;
- (BOOL)isIpadPortraitMode:(id)a0;
- (BOOL)hasRightOrBottomMargin:(id)a0;
- (BOOL)isBottomPopup:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isLandscape;

@end
