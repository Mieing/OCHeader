@class AWEEcommerceSearchLynxBaseView, UIView, AWEDoubleColumnSearchMerchandiseModel, AWEEcommerceSearchLongPressGuideView, AWEEcommerceSearchFeedbackPanel, AWEBinding, NSString, AWEMSearchAutoPlayCardModel, UIViewController, AWESearchEcommerceActionRecord, NSIndexPath;

@interface AWEEcommerceSearchLynxBaseCell : UICollectionViewCell <AWEEcomSearchBaseLynxCellProtocol, AWESearchMerchandiseDoubleColumnCell, AWEMSearchAutoPlayCard, AWEMSearchAutoPlayCardModelDelegate, AWEEcommerceSearchCellLongPressProtocol, AWEEcommerceSearchFeedbackPanelDislikeDelegate>

@property (retain, nonatomic) AWEEcommerceSearchLynxBaseView *lynxView;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) AWEBinding *longPressBinding;
@property (retain, nonatomic) AWEEcommerceSearchLongPressGuideView *longPressGuideView;
@property (retain, nonatomic) AWEEcommerceSearchFeedbackPanel *feedbackPanel;
@property (retain, nonatomic) UIView *whiteView;
@property (nonatomic) BOOL isActive;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) id transitionContext;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) AWEMSearchAutoPlayCardModel *autoPlayCardModel;
@property (nonatomic) BOOL hasSidebar;
@property (nonatomic) BOOL bridgeRegisted;
@property (nonatomic) unsigned long long columnType;
@property (retain, nonatomic) AWESearchEcommerceActionRecord *actionRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifierWithModel:(id)a0;
+ (void)appendSearchCommonParamsWithModel:(id)a0 containerWidth:(double)a1 allowReport:(BOOL)a2 updateParams:(id)a3;
+ (BOOL)enableReuseLynxEngineReset;
+ (void)dynamicModelPreprocess:(id)a0 allowReport:(BOOL)a1 updateParams:(id)a2;
+ (id)anniexReuseLynxEngineForHeight:(double)a0;
+ (id)calculateHeightReuseLynxEngine:(double)a0;
+ (void)resetCalculateHeightReuseLynxEngine;
+ (id)identifier;
+ (double)cardPaddingBottom;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unRegisterEventCallBack:(id)a0;
- (double)currPlaybackTime;
- (void)registerEventCallBack:(id /* block */)a0 forEvent:(id)a1;
- (void)configWithModel:(id)a0;
- (void)registerNotification;
- (void)setCurrPlaybackTime:(double)a0;
- (id)livePlayerView;
- (void)startMainPictureRegionLabelAnimationWithPitayaMessage:(id)a0;
- (void)setExtraPerfLog:(id)a0;
- (void)deleteDislikeCard:(id)a0;
- (void)playLongPressGuideLottie;
- (void)updatePlayDidFinishBlk:(id /* block */)a0;
- (void)registerBridges:(id)a0;
- (void)hideLongPressFeedbackPanel;
- (void)showLongPressFeedbackPanel;
- (BOOL)refreshWithNewSize:(struct CGSize { double x0; double x1; })a0;
- (void)refreshWithIntrinsicContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })feedbackPanelEdgeInsets;
- (void)createFeedbackPanel;
- (BOOL)canShowPlayLongPressGuide;
- (id)jumpToVideoDetailTableViewWithParams:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)videoView;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didEndDisplaying;
- (id)activeView;
- (void)resetPlayer;
- (void)willDisplay;
- (id)livePlayer;

@end
