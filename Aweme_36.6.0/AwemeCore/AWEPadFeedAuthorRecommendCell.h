@class NSString, UIImageView, UILabel, NSNumber, UITapGestureRecognizer;

@interface AWEPadFeedAuthorRecommendCell : UIView

@property (retain, nonatomic) UIImageView *coverImgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSNumber *index;

- (void)jumpAction;
- (void)setupAction;
- (void)configWithUserModel:(id)a0 index:(long long)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
