@class NSString, HTSLiveAudioBGData;

@interface HTSLiveLinkmicGuestLinkJoinLinkedChannelContent : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreInfo;
@property (nonatomic) long long score;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long linkThreshold;
@property (retain, nonatomic) HTSLiveAudioBGData *channelBackground;
@property (nonatomic) BOOL hasChannelBackground;

+ (id)descriptor;

@end
