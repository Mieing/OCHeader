@class HTSLiveAudioShowMediaContent, HTSLiveLinkmicWebAntiCheatContent, HTSLiveCommon, HTSLiveLiveMatrixEntranceChangeContent, HTSLiveHamletAvatarStartContent, HTSLiveNotifyMultiAvatarPublicStream, HTSLiveXplayInitContent;

@interface HTSLiveLinkmicEcologyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLiveMatrixEntranceChangeContent *liveMatrixEntranceChangeContent;
@property (retain, nonatomic) HTSLiveLinkmicWebAntiCheatContent *webAntiCheatContent;
@property (retain, nonatomic) HTSLiveXplayInitContent *xplayInitContent;
@property (retain, nonatomic) HTSLiveHamletAvatarStartContent *hamletAvatarStartContent;
@property (retain, nonatomic) HTSLiveNotifyMultiAvatarPublicStream *notifyMultiAvatarPublickStream;
@property (retain, nonatomic) HTSLiveAudioShowMediaContent *audioShowMediaContent;

+ (id)descriptor;

@end
