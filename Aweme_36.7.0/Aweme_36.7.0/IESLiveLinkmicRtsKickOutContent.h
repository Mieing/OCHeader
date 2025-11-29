@class NSString;

@interface IESLiveLinkmicRtsKickOutContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL needAck;
@property (copy, nonatomic) NSString *ackMessage;

+ (id)descriptor;

@end
