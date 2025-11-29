@class MMListenDiscoverResponse, TingReddotReportInfo, NSData;

@interface TingMusicSquareClientInsertionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenDiscoverResponse *discvoerInfo;
@property (retain, nonatomic) TingReddotReportInfo *reddotInfo;
@property (retain, nonatomic) NSData *reddotCtrlInfoBuffer;
@property (nonatomic) int insertionAction;

+ (void)initialize;

@end
