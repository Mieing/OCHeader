@class NSString, NSMutableSet;

@interface AWENoticeRecallMsgManager : NSObject <AWEUserMessage, AWENoticeRecallMsgManagerProtocol>

@property (retain, nonatomic) NSMutableSet *recalMsgSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)recallNotices;
- (BOOL)shouldRemoveMsg:(id)a0 groupID:(id)a1;
- (id)updateNotiRespModel:(id)a0;
- (void)__updateRecallMessageInfo:(id)a0;
- (BOOL)__shouldUpdateNotiResponseMsg:(id)a0 byRecallMsg:(id)a1;
- (id)__updateNotiResponseMsg:(id)a0 byRecallMsg:(id)a1;
- (BOOL)__shouldRemoveMsg:(id)a0 groupID:(id)a1 byRecallMsg:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)initData;

@end
