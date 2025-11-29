@class UIImageView, CAShapeLayer;

@interface AWEIMShareSendMessageIconView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *beforeSendImageView;
@property (retain, nonatomic) UIImageView *afterSendImageView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (nonatomic) double imageWH;

- (void)updateSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateUIForEnlargeAvatar;
- (void)updateSelectStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateBackgroundColor:(id)a0;

@end
