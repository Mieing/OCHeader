@class NSString;

@interface IESLiveLinkmicRtsUpdateLinkStatusContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *targetLinkmicIdStr;
@property (copy, nonatomic) NSString *targetUserId;
@property (nonatomic) int linkType;
@property (nonatomic) int silenceStatus;
@property (nonatomic) BOOL isKtv;
@property (nonatomic) BOOL needAck;
@property (copy, nonatomic) NSString *ackMessage;
@property (nonatomic) BOOL forceResumeVideoStream;
@property (nonatomic) BOOL forceResumeAudioStream;

+ (id)descriptor;

@end
