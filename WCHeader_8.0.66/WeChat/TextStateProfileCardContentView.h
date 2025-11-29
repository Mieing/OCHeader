@class NSString, TextStateSectionView, UIView;
@protocol TextStateProfileCardContentViewDelegate;

@interface TextStateProfileCardContentView : TextStateBaseCardContentView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) TextStateSectionView *footerView;
@property (retain, nonatomic) UIView *iconSourceSeparator;
@property (nonatomic) BOOL needsCreateOrUpdateLayout;
@property (weak, nonatomic) id<TextStateProfileCardContentViewDelegate> delegate;
@property (nonatomic) unsigned int footerComponents;
@property (nonatomic) BOOL showSameFriendDescription;
@property (retain, nonatomic) NSString *backgroundAccessibilityLabel;
@property (nonatomic) double bottomPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initBackgroundView;
- (void)initTopSeparator;
- (void)initFooterView;
- (double)heightForWidth:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowResendWhenPublishFailed:(BOOL)a0;
- (BOOL)shouldHideDefaultSourceView;
- (void)onContentUpdate;
- (void)shouldUpdateLayout;
- (void)setNeedsCreateOrUpdateLayout;
- (void)createOrUpdateLayoutIfNeeded;
- (void)updateFooterViewAndLayout;
- (void)updateIconButton;
- (void)createOrUpdateLayout;
- (void)updateSeparator;
- (void)createOrUpdateLayoutWithoutApply;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
