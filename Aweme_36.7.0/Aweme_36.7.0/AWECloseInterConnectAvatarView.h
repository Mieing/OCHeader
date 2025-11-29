@class UIImageView, UILabel;

@interface AWECloseInterConnectAvatarView : UIView

@property (retain, nonatomic) UIImageView *douyinImageView;
@property (retain, nonatomic) UIImageView *hotsoonImageView;
@property (retain, nonatomic) UIImageView *closeArrowImageView;
@property (retain, nonatomic) UILabel *douyinLabel;
@property (retain, nonatomic) UILabel *douyinSublabel;
@property (retain, nonatomic) UILabel *hotsoonLabel;
@property (retain, nonatomic) UILabel *hotsoonSublabel;
@property (retain, nonatomic) UIImageView *miniDouyinImageView;
@property (retain, nonatomic) UIImageView *miniHotsoonImageView;

- (void)configUI;
- (void)setDouyinImage:(id)a0 hotsoonImage:(id)a1 douyinNickName:(id)a2 hotsoonNickName:(id)a3;
- (void)setDouyinImage:(id)a0 hotsoonImage:(id)a1 douyinNickName:(id)a2 hotsoonNickName:(id)a3 douyinfans:(unsigned long long)a4 douyinfollows:(unsigned long long)a5 hotsoonfans:(unsigned long long)a6 hotsoonfollows:(unsigned long long)a7;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
