@class AWEIMTranspondListAlertViewController, NSString, NSMutableArray, AWEShareContext;
@protocol AWEIMShareAndForwardToChatProtocol, AWEIMShareListSelectUserControllerDelegate;

@interface AWEIMShareListSelectUserController : NSObject

@property (retain, nonatomic) AWEIMTranspondListAlertViewController *alertViewController;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSMutableArray *selectList;
@property (retain, nonatomic) NSMutableArray *sharedList;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic) BOOL isForwardIMMessage;
@property (nonatomic) BOOL isSharingGroupCommand;
@property (weak, nonatomic) id<AWEIMShareListSelectUserControllerDelegate> delegate;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *replayContent;

- (BOOL)shouldSelectShareModel:(id)a0 needSendDirectly:(BOOL)a1;
- (void)resetIMSetting;
- (void)sendMessageToAllSelectedShareModel:(id)a0;
- (id)checkSelectShareModel:(id)a0 needSendDirectly:(BOOL)a1;
- (BOOL)p_checkUserSendMessagePrivilegeWithShareModel:(id)a0 message:(id)a1 targetType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
