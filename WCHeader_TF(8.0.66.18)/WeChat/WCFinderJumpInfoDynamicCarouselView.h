@class UIView, WCFinderJumpInfoDynamicCarouselDetailItemView, MMWebImageView, MMTimer, FinderJumpInfo_Style, WCFinderJumpInfoDynamicCarouselDetailView, NSString, WCFinderJumpInfoDynamicCarouselTitleView, CAGradientLayer, WCFinderJumpInfoDynamicCarouselViewModel, MMUILabel, MMUIButton;
@protocol WCFinderJumpInfoDynamicCarouselViewDelegate;

@interface WCFinderJumpInfoDynamicCarouselView : UIView <WCFinderJumpInfoDynamicCarouselViewModelDelegate, WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselViewModel *viewModel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIView *iconStatusContainerView;
@property (retain, nonatomic) CAGradientLayer *iconStatusGradientLayer;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailItemView *iconStatusView;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselTitleView *titleView;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailView *detailView;
@property (retain, nonatomic) MMUILabel *bottomLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isStyleInitialized;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned long long feedExposeTimestamp;
@property (nonatomic) unsigned long long viewExposeTimestamp;
@property (weak, nonatomic) id<WCFinderJumpInfoDynamicCarouselViewDelegate> delegate;
@property (readonly, nonatomic) FinderJumpInfo_Style *jumpInfoStyle;
@property (readonly, nonatomic) unsigned long long currentPhase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createIconImageView;
+ (id)createTitleView;
+ (id)createDetailView;
+ (id)createBottomLabel;
+ (id)createActionButton;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)loadCardGestures;
- (void)loadSubviews;
- (void)didClickCard:(id)a0;
- (void)didClickActionButton:(id)a0;
- (void)setStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateSubviews:(BOOL)a0;
- (void)switchCarouselDetailViewWithAnimation:(long long)a0;
- (void)updateCarouselDetailView;
- (void)hideSubviewsBeforeExpandingCard;
- (void)hideSubviewsAnimatedBeforeExpandingCard:(id /* block */)a0;
- (void)showSubviewsAfterExpandingCard;
- (void)showSubviewsAnimatedAfterExpandingCard:(id /* block */)a0;
- (void)layoutAndFitSize:(BOOL)a0;
- (double)_fittingMaxWith;
- (void)SmallCard_layoutAndFitSize:(BOOL)a0;
- (void)BigCard_layoutAndFitSize:(BOOL)a0;
- (void)layoutSubviews;
- (void)titleViewContentDidChange;
- (void)detailViewContentDidChange;
- (void)showCard;
- (void)expandCard;
- (void)dynamicCarouselViewModelDidReloadViewProperties:(id)a0 shouldReloadSubviews:(BOOL)a1;
- (void)dynamicCarouselViewModelDidSwitchCarouselContent:(id)a0;
- (void)dynamicCarouselViewModelDidUpdateCarouselContent:(id)a0;
- (id)jumpInfo;
- (int)showPosition;
- (void)setFeedExposeTime:(unsigned long long)a0;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToPhase:(unsigned long long)a0 animated:(BOOL)a1;
- (void)jumpInfoAnimatedActionBeforeAnimation:(id /* block */)a0;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)a0;
- (void)resetReportData;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
