@class AWEEditActionContainerView, UIView, NSArray, AWEEditActionContainerViewLayout, NSString, AWEEditActionItemView, CAGradientLayer, NSNumber;

@interface AWEEditRightTopVerticalActionContainerView : UIView <AWEEditRightTopActionContainerViewProtocol>

@property (copy, nonatomic) NSArray *itemDatas;
@property (retain, nonatomic) AWEEditActionContainerViewLayout *containerViewLayout;
@property (retain, nonatomic) AWEEditActionContainerView *scrollView;
@property (retain, nonatomic) UIView *scrollViewContainerView;
@property (retain, nonatomic) AWEEditActionItemView *moreItemView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL needMoreButton;
@property (nonatomic) BOOL isExceedMaxHeight;
@property (nonatomic) BOOL isFromIM;
@property (nonatomic) BOOL isFromCommerce;
@property (nonatomic) long long ignoreUnfoldLimitCount;
@property (nonatomic) BOOL ignoreUnfoldLimit;
@property (nonatomic) BOOL folded;
@property (readonly, copy, nonatomic) NSArray *itemViews;
@property (copy, nonatomic) id /* block */ moreButtonClickedBlock;
@property (retain, nonatomic) NSNumber *maxHeightValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;
+ (long long)containerViewMaxItemCount:(long long)a0 maxUnfoldedItemCount:(long long)a1 ignoreUnfoldLimitCount:(long long)a2 ignoreWhitelist:(BOOL)a3;
+ (long long)containerViewMaxUnfoldedItemCount:(BOOL)a0;

- (void)moreButtonClicked:(id)a0;
- (id)aAWEStudioGlobalConfig;
- (void)tapToDismiss;
- (struct CGSize { double x0; double x1; })itemSizeWithItem:(id)a0;
- (long long)containerViewMaxItemCount;
- (void)updateActionItemsAlpha;
- (void)updateMaskLayerProperties;
- (struct CGSize { double x0; double x1; })scrollViewSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })moreButtonFrame;
- (long long)containerViewMaxUnfoldedItemCount;
- (double)intrinsicHeightWithItemCount:(long long)a0;
- (void)setFolded:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)initWithItemDatas:(id)a0 containerViewLayout:(id)a1 isFromIM:(BOOL)a2 ignoreUnfoldLimitCount:(long long)a3 isFromCommerce:(BOOL)a4 ignoreUnfoldLimit:(BOOL)a5;
- (double)initialScrollViewXWithMoreButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)setupViews;

@end
