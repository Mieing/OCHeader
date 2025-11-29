@class UIImageView;

@interface AWEPicoVRIndicator : UIButton

@property (retain, nonatomic) UIImageView *gyroBackgroundImageView;
@property (retain, nonatomic) UIImageView *gyroCircleImageView;
@property (nonatomic) BOOL gyroOpen;

- (void).cxx_destruct;
- (id)init;
- (void)initUI;

@end
