@class FixTitleColorButton, MMPageSheetConfig, UIView;
@protocol MMPageSheetBottomViewDelegate;

@interface MMPageSheetBottomView : UIView

@property (retain, nonatomic) FixTitleColorButton *cancelButton;
@property (retain, nonatomic) FixTitleColorButton *confirmButton;
@property (retain, nonatomic) UIView *customSubview;
@property (nonatomic) long long type;
@property (weak, nonatomic) MMPageSheetConfig *config;
@property (weak, nonatomic) id<MMPageSheetBottomViewDelegate> delegate;

- (void)onPageSheetDidAppear;
- (void)updateConfig:(id)a0;
- (void)resetButtonsWithConfig:(id)a0;
- (id)buttonWithConfig:(id)a0 isConfirm:(BOOL)a1;
- (void)layoutSubviews;
- (void)onConfirmButtonClick;
- (void)onCancelButtonClick;
- (void).cxx_destruct;

@end
