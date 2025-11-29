@class NSMutableArray;

@interface TingShareLyricsContext : WXPBGeneratedMessage

@property (nonatomic) int firstLyricsBeginTime;
@property (nonatomic) int lastLyricsFinishTime;
@property (retain, nonatomic) NSMutableArray *lyricsItemList;

+ (void)initialize;

@end
