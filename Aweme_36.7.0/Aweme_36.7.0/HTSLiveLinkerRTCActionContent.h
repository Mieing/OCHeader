@class HTSLiveLinkerRTCActionJoinRTCContent;

@interface HTSLiveLinkerRTCActionContent : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkerRTCActionJoinRTCContent *joinRtcContent;

+ (id)descriptor;

@end
