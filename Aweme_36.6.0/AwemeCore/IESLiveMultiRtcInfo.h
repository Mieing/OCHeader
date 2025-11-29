@class IESLiveSingingChallengeRtcInfo, IESLiveVideoEqualRoomRtcInfo, IESLiveCrossRoomLinkmicRtcInfo, IESLiveVideoDUOBattleRtcInfo, IESLiveGameBarrageRtcInfo, IESLiveMultiAnchorLinkmicRtcInfo, IESLiveVideoPositionRtcInfo;

@interface IESLiveMultiRtcInfo : IESLivePBBaseMessage

@property (nonatomic) int scene;
@property (readonly, nonatomic) int rtcInfoOneOfCase;
@property (retain, nonatomic) IESLiveVideoEqualRoomRtcInfo *videoEqualRoomRtcInfo;
@property (retain, nonatomic) IESLiveMultiAnchorLinkmicRtcInfo *multiAnchorLinkmicRtcInfo;
@property (retain, nonatomic) IESLiveSingingChallengeRtcInfo *singingChallengeRtcInfo;
@property (retain, nonatomic) IESLiveCrossRoomLinkmicRtcInfo *crossRoomLinkmicRtcInfo;
@property (retain, nonatomic) IESLiveVideoDUOBattleRtcInfo *videoDuoBattleRtcInfo;
@property (retain, nonatomic) IESLiveVideoPositionRtcInfo *videoPositionRtcInfo;
@property (retain, nonatomic) IESLiveGameBarrageRtcInfo *gameBarrageRtcInfo;
@property (nonatomic) BOOL hasGameBarrageRtcInfo;

+ (id)descriptor;

@end
