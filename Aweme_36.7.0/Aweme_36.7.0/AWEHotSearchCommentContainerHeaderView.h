@class UIStackView, UIView, AWEHotSearchCommentHeaderBackgroundView, NSString, AWEHotSearchCommentSlidingTabbarView, UIImageView, YYLabel, UILabel;

@interface AWEHotSearchCommentContainerHeaderView : UIView

@property (retain, nonatomic) AWEHotSearchCommentHeaderBackgroundView *topBackgroundView;
@property (retain, nonatomic) UIView *topBackgroundCornerView;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIView *bottomBackgroundCornerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *discussContainerView;
@property (retain, nonatomic) UIImageView *discussIconView;
@property (retain, nonatomic) UILabel *discussLabel;
@property (retain, nonatomic) UIView *discussPaddingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *detailPaddingView;
@property (retain, nonatomic) YYLabel *detailLabel;
@property (retain, nonatomic) AWEHotSearchCommentSlidingTabbarView *tabbarView;
@property (retain, nonatomic) UIView *tabbarAnimateView;
@property (nonatomic) BOOL hasTabbar;
@property (nonatomic) BOOL isEventDiscuss;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) BOOL isGray;
@property (nonatomic) BOOL isDetailTracked;
@property (nonatomic) BOOL isFromDiscussionTab;
@property (copy, nonatomic) id /* block */ tapTitleBlock;
@property (copy, nonatomic) id /* block */ heightUpdateBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateAlpha:(double)a0;
- (void)p_setupViewAction;
- (void)p_resetTabbarBackgroundColor;
- (id)p_getTabbarAnimateColor;
- (void)p_resetDiscussAndDetailWithContext:(id)a0 needSkeleton:(BOOL)a1;
- (void)p_layoutStackViewWithHasDiscuss:(BOOL)a0 hasDetail:(BOOL)a1 needSkeleton:(BOOL)a2;
- (BOOL)p_enableCompatibleSearchDiscussionsTab;
- (id)p_createSkeletonLineView;
- (void)p_toggleDetailIsExpand:(BOOL)a0;
- (id)p_getDetailTruncationToken;
- (void)p_toggleDetailIsExpand;
- (id)initWithHasTabbar:(BOOL)a0 isEventDiscuss:(BOOL)a1 isFromDiscussionTab:(BOOL)a2;
- (void)configWithState:(long long)a0 context:(id)a1;
- (double)getCriticalOffset;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
