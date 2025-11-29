@class NSData, TingReddotReportInfo, NSString;

@interface SquarePreloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *bytePassBuffer;
@property (retain, nonatomic) NSData *reddotClientBuffer;
@property (retain, nonatomic) TingReddotReportInfo *reportInfo;
@property (retain, nonatomic) NSString *targetLineId;

+ (void)initialize;

@end
