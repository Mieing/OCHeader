@class UIButton, CAGradientLayer;
@protocol MMScrollableActionSheetContainerDownStableViewDelegate;

@interface MMScrollableActionSheetContainerDownStableView : MMUIView

@property (weak, nonatomic) id<MMScrollableActionSheetContainerDownStableViewDelegate> delegate;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *cancelButton;

- (id)initWithDelegate:(id)a0;
- (void)setupCancelButton;
- (void)setupGradientLayer;
- (void)updateGradientLayerOpacity:(float)a0;
- (void)layoutSubviews;
- (double)calcuateCancelButtonHeight;
- (void)onClickedCancelButton;
- (void).cxx_destruct;

@end
