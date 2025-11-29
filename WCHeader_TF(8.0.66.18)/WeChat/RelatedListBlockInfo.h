@class NSMutableArray;

@interface RelatedListBlockInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isLoadingWhenExit;
@property (nonatomic) unsigned int exitLoadingCostMs;
@property (retain, nonatomic) NSMutableArray *flowLoadingCostMsList;
@property (nonatomic) unsigned int swipeUpToImpressionCount;
@property (nonatomic) unsigned int dwellTimeMs;
@property (nonatomic) unsigned int playTimeMs;
@property (retain, nonatomic) NSMutableArray *feedInfoList;

+ (void)initialize;

@end
