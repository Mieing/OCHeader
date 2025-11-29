@class CMessageWrap, ChatroomMsgEmoji, CEmoticonWrap;

@interface GCEmoticonCellModel : GCChatBaseCellModel

@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) unsigned long long msgDownloadStatus;
@property (retain, nonatomic) ChatroomMsgEmoji *emojiMsg;

- (id)initWithChatroomMessage:(id)a0;
- (Class)bindCellClass;
- (void)onChatroomMessageInitEnd;
- (id)emojiInfoObjFromGCEmojiMsg:(id)a0;
- (struct CGSize { double x0; double x1; })measurebubbleViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)emotionViewClick;
- (void)logStr:(id)a0;
- (void)logWithForamt:(id)a0;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)startDownloadImageIsFirstTime:(BOOL)a0;
- (void).cxx_destruct;

@end
