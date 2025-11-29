@class NSString;

@interface AWEIMTopAvatarContentComponent : AWEIMFlexComponent <AWEIMFloatingViewEvent, AWEIMMessageContentInterface, AWEIMMessageListUserInfoAction>

@property (nonatomic) BOOL disableShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)recommendBackupTextWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
+ (double)calculateHeightWithProps:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_createPresenter;
- (void)willShowFloattingView:(id)a0;
- (void)willDismissFloattingView:(id)a0;
- (void)p_setupKVO;
- (id)topAvatarMessage;
- (void)transferToProfileWithMethod:(id)a0;
- (id)displayMessage;
- (void)dealloc;

@end
