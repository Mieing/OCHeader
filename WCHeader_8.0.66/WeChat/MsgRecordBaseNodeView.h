@class BaseMessageCellView, NSString;

@interface MsgRecordBaseNodeView : FavRecordBaseNodeView <MessageNodeViewDelegate>

@property (retain, nonatomic) BaseMessageCellView *cellView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useMsgStyle:(int)a0;

- (void)addContentSubView;
- (void)onClickAsRefer;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)getViewController;
- (BOOL)isMsgCanRevoke:(id)a0;
- (void)tapImage_NodeView:(id)a0 needEditImage:(BOOL)a1;
- (void)tapLocation_NodeView:(id)a0;
- (void)tapFriendCard_NodeView:(id)a0 WithContact:(id)a1 WithMsg:(id)a2;
- (void)PlayVideo:(id)a0 soundable:(BOOL)a1;
- (void)tapAppNodeView:(id)a0;
- (BOOL)tryHandleMenu:(long long)a0 withViewModel:(id)a1;
- (void).cxx_destruct;

@end
