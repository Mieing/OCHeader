@class AWEIMChatModel, NSString;

@interface AWEIMFoldChatComponent : NSObject <IESIMFoldChatComponentProtocol>

@property (nonatomic) BOOL needFoldChat;
@property (nonatomic) long long xCount;
@property (nonatomic) long long preferredCount;
@property (retain, nonatomic) AWEIMChatModel *lastShowedChat;
@property (nonatomic) BOOL skipCalculate;
@property (nonatomic) unsigned long long foldStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveChat:(id)a0 whenFoldChatList:(id)a1;
- (void)calculateCountWhenLoadFirstPageChatList:(id)a0;
- (void)didAddNewChat:(id)a0 whenFoldChatList:(id)a1;
- (void)didMoveChat:(id)a0 whenFoldChatList:(id)a1;
- (void)calculateCountWhenLoadSnpashotChatList:(id)a0;
- (void)setNeedShowRecommend:(BOOL)a0;
- (BOOL)checkEnableFoldChatList:(id)a0;
- (BOOL)p_checkEnableShowUnreadCountWithChat:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
