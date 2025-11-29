@class AWEIMChatModel, RxDeferred, NSString;

@interface AWEIMForceInsertChat_MoveNotice : AWEIMComponentBase <AWEIMForceInsertChatAction, AWEIMNewMessageProtocol, AWEIMForceInsertChatProtocol>

@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (retain, nonatomic) RxDeferred *fetchNoticeMultiPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_canShowMessageTabFakeNoticeCell;
+ (id)imMoveNoticeConfig;
+ (BOOL)p_canShowMessageTabFakeNoticeCellForServiceType:(int)a0;

- (void)componentDidMounted:(id)a0;
- (void)didClickForceInsertChatCell:(id)a0 chatCell:(id)a1 chatListVC:(id)a2;
- (void)didRemoveForceInsertChat:(id)a0;
- (void)didShowForceInsertChat:(id)a0;
- (void)trackDeleteForceInsertChat:(id)a0;
- (void)trackClickSwipeDeleteChat:(id)a0 deleteMethod:(id)a1;
- (id)forceInsertDecisionNode;
- (void)didLoadNewMessages:(id)a0;
- (void)didLoadOfficialChats:(id)a0;
- (void)didReturnShouldGuideDismiss:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)dealloc;

@end
