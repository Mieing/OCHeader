@class CAGradientLayer, WCFinderShowcasePagingView, WCFinderFriendsAlsoFollowViewModel, NSString, UILabel, UIView, UIButton;

@interface WCFinderProfileRecommendFollowView : UIView <WCFinderShowcasePagingViewDatasource, WCFinderShowcasePagingViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *topInnerShadow;
@property (retain, nonatomic) CAGradientLayer *bottomInnerShadow;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (nonatomic) double cacheAnchorPosition;
@property (nonatomic) BOOL showInfoSecondLine;
@property (retain, nonatomic) WCFinderShowcasePagingView *pagingView;
@property (retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *recommends;
@property (nonatomic) double expandHorizontalPadding;
@property (weak, nonatomic) UIView *anchorRelateView;
@property (nonatomic) BOOL isExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupPagingView:(BOOL)a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)doLayout;
- (void)layoutAnchorPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcultePagingRect:(double)a0;
- (struct CGSize { double x0; double x1; })itemSizeWithContainerWidth:(double)a0;
- (void)onClickMore;
- (long long)numberOfShowcaseView:(id)a0;
- (void)showcaseView:(id)a0 updateCell:(id)a1 atIdx:(long long)a2;
- (void)showcaseView:(id)a0 onClickCellAtIdx:(long long)a1;
- (void)showcaseView:(id)a0 willDisplayCell:(long long)a1;
- (void).cxx_destruct;

@end
