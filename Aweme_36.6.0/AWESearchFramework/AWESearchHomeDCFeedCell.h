@class NSString, AWEDCFeedPageContext, AWESearchCachalotResultContext, AWEAwemeModel;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchHomeDCFeedCell : AWEDCFeedBaseCell <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (weak, nonatomic) AWEDCFeedPageContext *feedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)elementArray;

- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (void)themeDidChange:(id)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)onAwemeDiggNotification:(id)a0;
- (BOOL)isNeedToReportedAweme:(id)a0;
- (void)onAwemeFavoriteNotification:(id)a0;
- (BOOL)updateCardHeight;
- (void)updateHeightIfNeededWithViewModel:(id)a0 model:(id)a1;
- (void)preferenceAddToInterested;
- (void)preferenceStartRecordShowTime;
- (void)customComponentWillDisplayHandle;
- (void)preferenceEndRecordShowTime;
- (void)customComponentEndDisplayHandle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)dealloc;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
