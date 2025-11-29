@class WCFinderMaskButton, MMUIView, UILabel, MMUIButton, MMHeadImageView;
@protocol WCFinderMembershipPaymentConfirmViewDelegate;

@interface WCFinderMembershipPaymentConfirmView : MMPageSheetBaseView

@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) WCFinderMaskButton *confirmButton;
@property (weak, nonatomic) id<WCFinderMembershipPaymentConfirmViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickname:(id)a1;
- (double)contentViewHeight;
- (void)onCloseButtonClicked;
- (void)onConfirmButtonClicked;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void).cxx_destruct;

@end
