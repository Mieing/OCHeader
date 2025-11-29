@class NSString;

@interface CGPBusinessMsgStreamingState : GPBMessage

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int state;
@property (nonatomic) int error;
@property (copy, nonatomic) NSString *callId;

+ (id)descriptor;

@end
