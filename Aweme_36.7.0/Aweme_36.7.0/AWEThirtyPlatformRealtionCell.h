@class UIImageView, UIView, AWEThirtyPlatformRealtionCellConfig, UILabel;

@interface AWEThirtyPlatformRealtionCell : UIView

@property (retain, nonatomic) AWEThirtyPlatformRealtionCellConfig *config;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)setupGesture;
- (void)onTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (void)setupAccessibility;

@end
