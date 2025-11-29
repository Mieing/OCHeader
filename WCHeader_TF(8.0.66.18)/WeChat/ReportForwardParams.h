@class NSString;

@interface ReportForwardParams : WXPBGeneratedMessage

@property (nonatomic) int forwardMessageMsgAppType;
@property (nonatomic) int forwardResult;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSString *forwardToUsr;
@property (nonatomic) long long msgId;

+ (void)initialize;

@end
