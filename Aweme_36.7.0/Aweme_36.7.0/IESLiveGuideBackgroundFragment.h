@class HTSLiveUser, NSArray, UIImageView, NSString;

@interface IESLiveGuideBackgroundFragment : IESLiveGuideComponent <IESLiveGuideActions>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) HTSLiveUser *currentLoginUser;
@property (retain, nonatomic) NSArray *userAvatarList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)updateBackgroundImage:(id)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)setupBackgroundView:(unsigned long long)a0;
- (void)p_bindActions;
- (void).cxx_destruct;

@end
