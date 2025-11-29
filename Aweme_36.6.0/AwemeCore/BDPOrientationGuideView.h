@class UIImageView, UILabel, UIView;

@interface BDPOrientationGuideView : UIView

@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *tips;
@property (nonatomic) long long orientation;

- (id)initWithParentView:(id)a0 orientation:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)layoutUI;

@end
