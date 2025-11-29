@class UITapGestureRecognizer, UIColor, FBSDKAppLink, UILabel, UIButton;
@protocol FBSDKAppLinkReturnToRefererViewDelegate;

@interface FBSDKAppLinkReturnToRefererView : UIView {
    BOOL _explicitlyHidden;
}

@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer;
@property (weak, nonatomic) id<FBSDKAppLinkReturnToRefererViewDelegate> delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) FBSDKAppLink *refererAppLink;
@property (nonatomic) unsigned long long includeStatusBarInSize;
@property (nonatomic, getter=isClosed) BOOL closed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)initViews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)statusBarHeight;
- (void)setHidden:(BOOL)a0;
- (void)updateLabelText;
- (void)updateColors;
- (id)drawCloseButtonImageWithColor:(id)a0;
- (id)localizedLabelForReferer:(id)a0;
- (BOOL)hasRefererData;
- (void)closeButtonTapped:(id)a0;
- (void)onTapInside:(id)a0;
- (void)updateHidden;
- (void).cxx_destruct;

@end
