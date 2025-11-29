@class UIView, NSString, UIImageView, UIButton, MMMsgCommonTipsView, NSMutableArray, MMMsgHeaderTipsView, MMMsgTipsExpandView, MMUIButton, MMMsgContentTipsItem;
@protocol MMMsgContentNavBarDelegate;

@interface MMMsgContentNavBar : UIView <MMMsgTipsExpandViewDelegate, MMMsgHeaderTipsViewDelegate, TipsViewDelegate>

@property (retain, nonatomic) NSMutableArray *penddingItems;
@property (nonatomic) BOOL isShowingTipsBar;
@property (nonatomic) BOOL isShowingExpandView;
@property (nonatomic) double navigationBarHeight;
@property (nonatomic) BOOL tipsBarVisible;
@property (retain, nonatomic) UIView *navBarTitleView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) MMMsgCommonTipsView *commonTipsView;
@property (retain, nonatomic) MMMsgHeaderTipsView *bizTipsView;
@property (retain, nonatomic) MMUIButton *headerCustomButton;
@property (retain, nonatomic) UIImageView *gradientMaskView;
@property (retain, nonatomic) UIView *blurBgView;
@property (retain, nonatomic) UIButton *bgMaskView;
@property (retain, nonatomic) UIView *expandContainerView;
@property (retain, nonatomic) MMMsgTipsExpandView *expandCustomView;
@property (retain, nonatomic) UIView *expandBottomView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) id<MMMsgContentNavBarDelegate> delegate;
@property (nonatomic) BOOL hideBottomLine;
@property (readonly, nonatomic) double currentTipsBarHeight;
@property (retain, nonatomic) MMMsgContentTipsItem *currentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationBarHeight:(double)a1;
- (void)setNavBarHeight:(double)a0;
- (void)showTipsBarWithItem:(id)a0;
- (void)hideTipsBarWithBizType:(long long)a0 animated:(BOOL)a1;
- (void)showPenddingTipsBar;
- (void)hideCommonTips;
- (void)showExpandView:(id)a0 animated:(BOOL)a1;
- (void)hideExpandViewWithAnimated:(BOOL)a0;
- (void)hideTipsBar:(long long)a0 animated:(BOOL)a1;
- (void)hideAllWithAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)initUI;
- (void)initBizTipsBar;
- (void)expandNavBarHeight:(double)a0 animated:(BOOL)a1 showBgMask:(BOOL)a2 complete:(id /* block */)a3;
- (void)expandNavBarHeight:(double)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)updateExpandContentView;
- (void)updateBackgroundCornerMask;
- (void)updateTipsBarCustomButton;
- (double)totalExpandHeight;
- (double)expandFooterHeight;
- (void)onCloseExpandButtonClick;
- (void)onMaskBgClick;
- (void)onExpandViewSizeChange:(struct CGSize { double x0; double x1; })a0 animateAction:(id /* block */)a1 complete:(id /* block */)a2;
- (void)onHideExpandView:(BOOL)a0;
- (void)onTipsBarClick;
- (void)onTipsViewClick:(id)a0;
- (void)onTipsViewClose:(id)a0;
- (void)onTipsViewHideAtTimeout:(id)a0;
- (void)onPerformAction:(id)a0;
- (void)onPerformExposeAction:(id)a0;
- (void)onTipsViewHeightChanged:(id)a0;
- (void)removeCommonTipsView;
- (void)hideExpandViewOfFirstTipsViewAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
