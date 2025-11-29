@class ChatroomMsgShareLink;

@interface GCShareLinkCellModel : GCChatBaseCellModel

@property (retain, nonatomic) ChatroomMsgShareLink *shareLink;

- (id)initWithChatroomMessage:(id)a0;
- (Class)bindCellClass;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
