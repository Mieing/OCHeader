@class UIStackView, UIImageView, UIView, AWEDetailTrendTagGradientLabel;

@interface AWEDetailNewTrendTagView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *photoContainerView;
@property (retain, nonatomic) UIImageView *photoView;
@property (retain, nonatomic) AWEDetailTrendTagGradientLabel *titleLabel;
@property (retain, nonatomic) UIView *rightPhotoContainerView;
@property (retain, nonatomic) UIImageView *rightPhotoView;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
