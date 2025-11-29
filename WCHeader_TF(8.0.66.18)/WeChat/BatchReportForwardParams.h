@class NSString, NSMutableArray;

@interface BatchReportForwardParams : WXPBGeneratedMessage

@property (nonatomic) int forwardMessageMsgAppType;
@property (retain, nonatomic) NSMutableArray *forwardResult;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSMutableArray *forwardToUsr;
@property (retain, nonatomic) NSMutableArray *msgId;

+ (void)initialize;

@end
