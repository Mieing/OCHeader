@class UIView, AWESearchVideoCardAnchorPluginConfig, NSString, NSDictionary, NSMutableArray, AWESearchEventDispather, AWEAnchorNormalInfoModel, AWEGeneralSearchVideoCardModel;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchVideoCardCommonWeakAnchorComponent : AWESearchComponent <AWESearchVideoCardWeakAnchorProvider>

@property (retain, nonatomic) id<AWESearchComponentProtocol> weakAnchorComponent;
@property (retain, nonatomic) UIView *tapContainerView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAnchorNormalInfoModel *anchorNormalInfo;
@property (retain, nonatomic) AWESearchVideoCardAnchorPluginConfig *pluginConfig;
@property (retain, nonatomic) NSMutableArray *anchorPlugins;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (BOOL)shouldShowWeakAnchorComponentWithModel:(id)a0;

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)componentViewPrepareForReuse;
- (id)provideProtocol;
- (void)setModelOnly:(id)a0;
- (void)removePluginsIfExist;
- (void)addPluginsIfNeeded;
- (void).cxx_destruct;
- (id)componentView;

@end
