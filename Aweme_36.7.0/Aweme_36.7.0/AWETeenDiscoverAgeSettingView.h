@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWETeenDiscoverAgeSettingView : UIView <AWEUserMessage, AWETeenUserMessage>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) id /* block */ ageLabelClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)awe_themeDidChange:(long long)a0;
- (id)aAWEBrandColorAdapter;
- (void)p_addGestureRecognizer;
- (void)didFinishUpdateMinorAwemeUser;
- (void)p_renderUI;
- (void)updateDiscoverUserInfo;
- (void)p_bindNotification;
- (void)p_setTitleAndIconColor;
- (void)tapClick:(id)a0;
- (void)p_ageSettingFinished;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
