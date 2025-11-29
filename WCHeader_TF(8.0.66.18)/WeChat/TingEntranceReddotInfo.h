@class NSData, TingReddotReportInfo, MMListenRedDotByPassInfo;

@interface TingEntranceReddotInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) int cmdId;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (retain, nonatomic) NSData *bubbleBuffer;
@property (retain, nonatomic) TingReddotReportInfo *reportInfo;
@property (retain, nonatomic) MMListenRedDotByPassInfo *redDotByPassInfo;
@property (nonatomic) int ctrlType;

+ (void)initialize;

@end
