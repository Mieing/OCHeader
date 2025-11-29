@class UITapGestureRecognizer, UIColor, BFAppLink, UILabel, UIButton;
@protocol BFAppLinkReturnToRefererViewDelegate;

@interface BFAppLinkReturnToRefererView : UIView {
    BOOL _explicitlyHidden;
}

@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer;
@property (weak, nonatomic) id<BFAppLinkReturnToRefererViewDelegate> delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) BFAppLink *refererAppLink;
@property (nonatomic) unsigned long long includeStatusBarInSize;
@property (nonatomic) BOOL closed;

- (void)initViews;
- (void)onTapInside:(id)a0;
- (BOOL)hasRefererData;
- (void)updateHidden;
- (id)localizedLabelForReferer:(id)a0;
- (id)drawCloseButtonImageWithColor:(id)a0;
- (double)statusBarHeight;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLabelText;
- (void)closeButtonTapped:(id)a0;
- (void)updateColors;

@end
