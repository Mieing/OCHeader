@class AWEUserModel, NSString, UIImageView, NSDictionary, UILabel, UIView, UIViewController;
@protocol AWEUserRecommendViewControllerProtocol;

@interface AWEUserRecommendEmptyRecommendViewController : UIViewController <AWEUserRecommendEmptyRecommendViewControllerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipIconView;
@property (retain, nonatomic) UILabel *tipTitleLabel;
@property (retain, nonatomic) UILabel *tipSubstileLabel;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isPlayingAnimation;
@property (retain, nonatomic) UIViewController<AWEUserRecommendViewControllerProtocol> *userRecommendVC;
@property (retain, nonatomic) UIView *recommendView;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFromString;
- (BOOL)hasRecommendData;
- (id)iconImageForEmptyType;
- (id)titleForEmptyType;
- (id)descriptionForEmptyType;
- (id)p_recommendContext;
- (void)playRecommendViewAnimation:(BOOL)a0;
- (id)initWithUserID:(id)a0 type:(long long)a1 extraDict:(id)a2;
- (void)p_setupUI;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
