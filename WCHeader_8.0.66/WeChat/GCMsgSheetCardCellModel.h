@class ChatroomMsgSheetCard;

@interface GCMsgSheetCardCellModel : GCChatBaseCellModel

@property (retain, nonatomic) ChatroomMsgSheetCard *sheetCard;

- (void)onChatroomMessageInitEnd;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithChatroomMessage:(id)a0;
- (id)bindMsgSheetCardCell;
- (Class)bindCellClass;
- (void).cxx_destruct;

@end
