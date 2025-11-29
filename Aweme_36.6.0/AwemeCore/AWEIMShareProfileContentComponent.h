@class NSString;

@interface AWEIMShareProfileContentComponent : AWEIMFlexComponent <AWEUserMessage, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (BOOL)p_isAIAweType:(long long)a0;
+ (void)p_enterCurrentUserProfile:(id)a0 context:(id)a1 viewModel:(id)a2;
+ (void)trackEcomProfileMsgClick:(id)a0 viewModel:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresnter;
- (void)p_asyncLoadUserInfo;
- (void)p_refreshCardFollowConfig:(id)a0;
- (void)p_refreshCardUserInfoConfig:(id)a0;
- (void)p_followCurrentUser;
- (id)displayMessage;
- (void)dealloc;
- (id)message;

@end
