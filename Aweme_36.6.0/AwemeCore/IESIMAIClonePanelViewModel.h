@class AWEIMUser, NSArray, NSString, NSDictionary, IESIMAIClonePanelSettingItemViewModel;
@protocol IESIMConversationProtocol;

@interface IESIMAIClonePanelViewModel : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *avatarUrl;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *botUserID;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) AWEIMUser *aiCloneUser;
@property (copy, nonatomic) NSString *creatorNickname;
@property (copy, nonatomic) NSString *creatorUserID;
@property (copy, nonatomic) NSString *creatorSecUserID;
@property (retain, nonatomic) IESIMAIClonePanelSettingItemViewModel *proactively;
@property (copy, nonatomic) NSArray *buttonModels;
@property (copy, nonatomic) id /* block */ viewDidLoadBlock;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)p_enterMethodWithPassInEnterMethod:(id)a0 con:(id)a1 creatorUid:(id)a2;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)trackAIRoleManageWithClickType:(id)a0 allowMsgFirst:(id)a1;
- (void)trackAIRoleInviteWithSuccess:(BOOL)a0 allowMsgFirst:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
