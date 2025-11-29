@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMShareModelProtocol, AWEIMOnlinePrivacyDisrecommendTableViewCellDelegate;

@interface AWEIMOnlinePrivacyDisrecommendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLable;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<AWEIMOnlinePrivacyDisrecommendTableViewCellDelegate> delegate;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userID;

- (void)rightBtnTapped:(id)a0;
- (void)configAvatarWithURLArray:(id)a0 placeholder:(id)a1 keyProvider:(id)a2 needCut:(BOOL)a3;
- (void)configName:(id)a0;
- (void)configDescription:(id)a0;
- (void)setButtonSelected:(BOOL)a0;
- (void)configCorner:(unsigned long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)enableButton:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
