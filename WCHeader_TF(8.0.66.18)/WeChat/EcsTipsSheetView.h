@class UIButton, NSString, UIView;
@protocol EcsTipsSheetViewDelegate;

@interface EcsTipsSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) id<EcsTipsSheetViewDelegate> delegate;

- (id)initWithTips:(id)a0;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)initView;
- (void)onConfirmButtonClick;
- (void)updateContentViewHeight;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
