@class NSString;

@interface IESIMLiveCustomServiceImpl : NSObject <IESIMLiveCustomServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getLiveCustomServiceChatFrom:(id)a0;
- (id)displaySenderNameForMessage:(id)a0;
- (BOOL)isFeatureEnable;
- (void)updateLiveCustomServiceTargetUser:(id)a0 forChatModel:(id)a1;
- (void)updateLiveCustomServiceConName:(id)a0 forChatModel:(id)a1;
- (void)updateLiveCustomServiceConAvatar:(id)a0 forChatModel:(id)a1;
- (BOOL)haveLiveDelegate;
- (void)updateUnReadCount:(id)a0 totalCount:(long long)a1;
- (id)liveCustomServiceConAvatar:(id)a0;
- (void)trackLiveCustomEntryUnReadCount:(id)a0;
- (id)liveCustomChatName:(id)a0;
- (id)getterliveCustomChatName:(id)a0;
- (id)getterliveCustomChatNameFromCon:(id)a0;
- (id)liveCustomAvatarURL:(id)a0;
- (void)updateWithIMChatModel:(id)a0 fromChat:(id)a1;
- (BOOL)liveCustomChatIsRoleService:(id)a0;
- (BOOL)liveCustomServiceIsFromMe:(id)a0;
- (id)liveCustomServiceSenderName:(id)a0;
- (id)faqButton:(id)a0;
- (id)faqView:(id)a0;
- (void)addFaqPanelIfNeeded:(id)a0 inSuperView:(id)a1;
- (void)pushUserRoleListVC;
- (void)pushServiceRoleListVC;
- (long long)liveCustomServiceRoleForMessage:(id)a0;
- (id)serviceRoleExtraInfo:(id)a0;
- (id)liveCustomServiceSpUid:(id)a0;
- (id)liveCustomServiceSpSecUid:(id)a0;
- (id)roleString:(long long)a0;
- (void)setupLiveCustomServiceWithCon:(id)a0;
- (void)updateUserInfo:(id)a0;

@end
