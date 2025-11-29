@class HTSLiveUser, HTSEventContext, HTSLiveUserAPI, NSString, NSMutableArray, GPBInt64ObjectDictionary;
@protocol IESLiveRoomService, HTSLiveAdminListReactions;

@interface HTSLiveAdministratorStore : NSObject <IESLiveAdminStoreIntegration>

@property (retain, nonatomic) HTSLiveUser *anchor;
@property (retain, nonatomic) HTSLiveUserAPI *userApi;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (weak, nonatomic) id<HTSLiveAdminListReactions> reactionCommon;
@property (nonatomic) long long maxAdminCount;
@property (nonatomic) long long maxPromptCount;
@property (nonatomic) long long currentPromptCount;
@property (copy, nonatomic) GPBInt64ObjectDictionary *privilegeExtraInfo;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)actualAdministratorCount;
- (void)trackValidPrompter:(id)a0;
- (void)doAction:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2;
- (void)unDoAction:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2;
- (void)handlePromptStatusWithUser:(id)a0;
- (void)trackPrompterChange:(id)a0 action:(id)a1;
- (void)fetchUserList:(unsigned long long)a0;
- (void)viewShowOpportunity;
- (void)alertActionOpportunity:(id)a0 cancel:(BOOL)a1;
- (void)alertShowOpportunity:(id)a0 ensure:(BOOL)a1;
- (id)fillInTableView:(id)a0 WithCellAtIndexPath:(id)a1 isWhite:(BOOL)a2;
- (void)unDoAction:(id)a0;
- (id)dataSourceNewStyle;
- (BOOL)moreThere;
- (unsigned long long)actualLimitCount;
- (void)cancelPrompt:(id)a0;
- (id)initWithAnchor:(id)a0 room:(id)a1;
- (long long)maxCount;
- (void).cxx_destruct;
- (void)setPrompt:(id)a0;
- (void)doAction:(id)a0;

@end
