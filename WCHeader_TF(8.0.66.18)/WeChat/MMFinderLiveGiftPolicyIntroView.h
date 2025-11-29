@class UIButton, NSString, MMFinderLiveLegalPromotConfig, UIView, RichTextView, UILabel;

@interface MMFinderLiveGiftPolicyIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>

@property (retain, nonatomic) MMFinderLiveLegalPromotConfig *config;
@property (retain, nonatomic) RichTextView *introDetailLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *introTitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateIntroTitleLabel;
- (void)updateIntroDetailLabel;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
