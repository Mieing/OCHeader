@class IESLiveMediaAvatarView, IESLiveMediaAvatarStore, NSString;

@interface IESLiveMediaRoomAvatarFragment : IESLiveRoomComponent <IESLiveMediaRoomProfileProvider, IESLiveMessageInteractionModuleCommentAction, IESLiveFansGroupActions>

@property (retain, nonatomic) IESLiveMediaAvatarStore *store;
@property (retain, nonatomic) IESLiveMediaAvatarView *anchorInfoView;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)createDidFinishForLevel:(long long)a0;
- (void)didReceiveHTSLiveFansclubMessage:(id)a0;
- (void)didFansGroupEntryInfoRequestFinish:(BOOL)a0 fansGroupEntryInfo:(id)a1;
- (void)bringIntroduceToFront;
- (void)updateRoomProfile:(long long)a0;
- (void)clickFollowButton;
- (void)clickNickName;
- (void)clickFansClub;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
