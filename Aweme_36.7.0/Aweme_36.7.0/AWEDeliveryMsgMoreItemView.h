@class UIImageView, AWEDeliveryCustomBtn, UIView;
@protocol AWEDeliveryMsgMoreItemViewDelegate;

@interface AWEDeliveryMsgMoreItemView : UIView

@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) AWEDeliveryCustomBtn *foldedButton;
@property (weak, nonatomic) id<AWEDeliveryMsgMoreItemViewDelegate> delegate;
@property (nonatomic) unsigned long long type;

- (id)createImageWithMaskLayerColors:(id)a0;
- (void)foldedButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
