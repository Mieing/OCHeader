@class UIImageView, UILabel;
@protocol ACCFollowShootAutoFillTipViewDelegate;

@interface ACCFollowShootAutoFillTipView : UIView

@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (weak, nonatomic) id<ACCFollowShootAutoFillTipViewDelegate> delegate;

- (void)confirmLabelTapped;
- (void)updateImageForImageView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
