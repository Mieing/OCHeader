@class IESECLiveGoodsListItemViewModel, IESECLiveContext, UILabel, IESECObservationManager, IESECLivePromotionCard, UIView, NSString, IESECLigoManager, NSTimer, IESECLiveLayoutProxyView, IESECLivePromotionCardConfigModel, IESECLiveAnimateImageView, NSIndexPath;
@protocol IESECLivePromotionCardViewProtocol, IESECLivePromotionCardBusinessDelegate, IESECLiveGoodsListViewCellDelegate, IESECLivePromotionCardBusinessParamsDelegate;

@interface IESECLiveGoodsListViewCellV2 : UICollectionViewCell <IESECLiveLynxViewChangeDelegate, IESECLiveComboBuyViewDelegate, IESECLiveComboBuyViewDataSource>

@property (nonatomic) BOOL cellInitSetupDone;
@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *item;
@property (nonatomic) BOOL isWaitingForExplain;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESECLiveLayoutProxyView *cellHeaderOpenBannerContainer;
@property (retain, nonatomic) IESECLiveLayoutProxyView *cellFooterOpenBannerContainer;
@property (retain, nonatomic) IESECLiveLayoutProxyView *cellFooterHorizontalContainer;
@property (retain, nonatomic) IESECLigoManager *ligoManager;
@property (retain, nonatomic) UIView<IESECLivePromotionCardViewProtocol> *promotionCardView;
@property (retain, nonatomic) IESECLiveAnimateImageView *cellGuideAnimView;
@property (retain, nonatomic) NSTimer *cellGuideTimer;
@property (retain, nonatomic) NSTimer *cellBargainProtectTimer;
@property (retain, nonatomic) IESECObservationManager *viewModelObservationManager;
@property (retain, nonatomic) IESECLivePromotionCardConfigModel *cardConfigModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id<IESECLiveGoodsListViewCellDelegate> delegate;
@property (retain, nonatomic) IESECLivePromotionCard *promotionCard;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> cardDelegate;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessParamsDelegate> bizParamsDelegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithItemViewModel:(id)a0;
+ (double)cellDynamicRegionHeightWithURL:(id)a0;
+ (void)registerLigoRouterListGoodsFooterDynamicSlot;
+ (id)identity;

- (id)panelEnvironment;
- (void)reportGoodsShowEvent;
- (void)setupWithItem:(id)a0 refreshType:(long long)a1;
- (void)setupCardViewWithLiveContext:(id)a0 configModel:(id)a1 cardDelegate:(id)a2 bizParamsDelegate:(id)a3;
- (id)currentActionTrackModuleInfo;
- (id)getCardConfigModel;
- (void)updateWithItem:(id)a0 refreshType:(long long)a1;
- (void)setupLongPressViewWithGuideAnimTarget:(id)a0;
- (void)p_handleCellLongPress:(id)a0;
- (void)addContextEventSubscriber;
- (void)doBargainAction;
- (void)showGuideAnimWithbizName:(id)a0 duration:(double)a1 animationURL:(id)a2 eventParams:(id)a3;
- (void)registerCellOpenRegionLifeCycleBlock;
- (void)setupCellBottomDynamicRegionContentIfNeeded;
- (id)cellOpenRegionMap;
- (void)didChangeSizeNeedAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)scrollToListTop;
- (void)loadOpenComponentWith:(id)a0 localRegionName:(id)a1;
- (struct CGSize { double x0; double x1; })promotionCardLocatedPanelSize;
- (void)enableListRefreshAndUserInteraction:(BOOL)a0 currentBlockMaskView:(id)a1;
- (void)removeCellBargainProtectTimer;
- (id)generateLongPressGuideBtmModel;
- (void)p_handleGuideViewDisappear:(id)a0;
- (void)removeCellGuideTimer;
- (void)p_handleGuideViewDisappearUser;
- (void)lynxViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 localRegionName:(id)a1;
- (BOOL)lynxViewEnableReuseAndUpdate;
- (void)lynxViewDidFinishLoadForLocalRegionName:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)setupAccessibility;

@end
