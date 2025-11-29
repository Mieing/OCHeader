@class UIControl, NSString, UIImageView, UILabel;
@protocol AWEECOMIMSubCardTrackProtocol;

@interface AWEECOMIMSubCardMemberInfoCard : UIView

@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIImageView *memberImgView;
@property (retain, nonatomic) UIImageView *levelImgView;
@property (retain, nonatomic) UILabel *themeLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) NSString *cardUrl;
@property (retain, nonatomic) id<AWEECOMIMSubCardTrackProtocol> tracker;

+ (double)designHeight;
+ (double)paddingBetweenAvatarTitle;

- (void)tapCard;
- (void)updateWithData:(id)a0 shopInfoModel:(id)a1;
- (void)customLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
