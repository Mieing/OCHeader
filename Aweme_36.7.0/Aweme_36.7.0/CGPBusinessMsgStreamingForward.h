@class NSString;

@interface CGPBusinessMsgStreamingForward : GPBMessage

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *callId;
@property (copy, nonatomic) NSString *forwardInfo;
@property (copy, nonatomic) NSString *subscribeMixInfo;

+ (id)descriptor;

@end
