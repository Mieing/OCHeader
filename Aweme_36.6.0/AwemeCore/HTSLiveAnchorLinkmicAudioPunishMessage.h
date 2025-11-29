@class HTSLiveCommon, HTSLiveAnchorLinkmicAudioPunishInfo;

@interface HTSLiveAnchorLinkmicAudioPunishMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveAnchorLinkmicAudioPunishInfo *info;
@property (nonatomic) BOOL hasInfo;

+ (id)descriptor;

@end
