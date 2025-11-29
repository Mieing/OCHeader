@class NSString, UIImageView, UILabel, IESLiveUserProfile;

@interface IESLiveUserCardTagLocalLifeRankView : UIView

@property (retain, nonatomic) UIImageView *rankBgIcon;
@property (retain, nonatomic) UILabel *rankLabelTitle;
@property (retain, nonatomic) UILabel *rankLabelRank;
@property (retain, nonatomic) UIImageView *rankImageView;
@property (copy, nonatomic) NSString *honorTitle;
@property (copy, nonatomic) NSString *honorPrefix;
@property (copy, nonatomic) NSString *prefixImageUrl;
@property (retain, nonatomic) IESLiveUserProfile *userProfile;

- (void)parseTitle;
- (void)bindData;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldShow;
- (void)setupView;

@end
