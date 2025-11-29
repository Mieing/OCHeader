@class NSArray, UIImageView, UILabel, UIView;

@interface AWESimpleInfoView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSArray *imageViewArray;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) UILabel *rankLabel;
@property (nonatomic) long long type;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)configImages;
- (void)updateAvatarBorderColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
