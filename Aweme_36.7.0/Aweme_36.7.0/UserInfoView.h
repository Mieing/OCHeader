@class IESLLGDCommentItemViewModel, NSString, UIImageView, UILabel;

@interface UserInfoView : UIView

@property (copy, nonatomic) NSString *avatarSrc;
@property (copy, nonatomic) NSString *userLevel;
@property (copy, nonatomic) NSString *userRate;
@property (retain, nonatomic) IESLLGDCommentItemViewModel *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *levelImageView;
@property (retain, nonatomic) UIImageView *rateImageView;

- (void)updateLayoutConstarints;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
