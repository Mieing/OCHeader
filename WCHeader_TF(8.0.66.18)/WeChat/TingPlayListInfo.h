@class TingTapeInfo, NSMutableArray;

@interface TingPlayListInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *ids;
@property (nonatomic) int playingIndex;
@property (nonatomic) int sourceCount;
@property (retain, nonatomic) TingTapeInfo *tapeInfo;

+ (void)initialize;

@end
