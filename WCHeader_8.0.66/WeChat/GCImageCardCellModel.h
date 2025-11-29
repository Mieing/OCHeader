@class ChatroomMsgImgCard;

@interface GCImageCardCellModel : GCChatBaseCellModel

@property (retain, nonatomic) ChatroomMsgImgCard *imgCard;

- (id)initWithChatroomMessage:(id)a0;
- (Class)bindCellClass;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
