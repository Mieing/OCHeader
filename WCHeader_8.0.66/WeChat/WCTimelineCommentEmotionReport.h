@class WCDataItem, NSMutableArray;

@interface WCTimelineCommentEmotionReport : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) NSMutableArray *clickEmojiIconIdList;
@property (retain, nonatomic) NSMutableArray *clickEmojiIdList;

- (id)init;
- (void)report:(unsigned char)a0;
- (void).cxx_destruct;

@end
