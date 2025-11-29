@class NSString, HTSLiveCommon;

@interface HTSLiveLinkmicAISilenceStatusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *aiUserId;
@property (nonatomic) int silenceStatus;

+ (id)descriptor;

@end
