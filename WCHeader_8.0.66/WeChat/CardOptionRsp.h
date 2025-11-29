@class NSString;

@interface CardOptionRsp : WXPBGeneratedMessage

@property (nonatomic) unsigned int clickAction;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSString *forwardUsername;
@property (nonatomic) BOOL fastForward;
@property (retain, nonatomic) NSString *timelineSessionId;

+ (void)initialize;

@end
