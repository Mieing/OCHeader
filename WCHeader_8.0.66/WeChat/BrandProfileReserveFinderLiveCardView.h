@class UIView, MMUIButton, NSString, UIImageView, ExpandableTextView, BizProfileV2Resp, UIAccessibilityElement, UILabel;
@protocol BrandProfileReserveFinderLiveCardViewDelegate;

@interface BrandProfileReserveFinderLiveCardView : MMUIView <ExpandableTextViewDelegate>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ExpandableTextView *contentLabel;
@property (retain, nonatomic) MMUIButton *reserveButton;
@property (retain, nonatomic) BizProfileV2Resp *cacheItem;
@property (retain, nonatomic) MMUIButton *showMoreReserveButton;
@property (retain, nonatomic) UILabel *allReserveLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *horizontalSperatorLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIAccessibilityElement *fullCardElement;
@property (nonatomic) BOOL bReserved;
@property (weak, nonatomic) id<BrandProfileReserveFinderLiveCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)setupContentLabel;
- (void)layoutSubviews;
- (double)labelMaxiumWidth;
- (void)onReserveButtonClicked;
- (void)onShowMoreButtonClicked;
- (void)onExpandableTextViewExpand:(BOOL)a0;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSubviewSize;
- (id)accessibilityElements;
- (void).cxx_destruct;

@end
