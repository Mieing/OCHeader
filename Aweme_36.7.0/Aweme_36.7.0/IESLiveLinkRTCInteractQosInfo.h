@class NSString, IESLiveLinkRTCInteractCommunicationQosInfo;

@interface IESLiveLinkRTCInteractQosInfo : NSObject

@property (nonatomic) double joinChannelTime;
@property (nonatomic) double reconnetingTime;
@property (nonatomic) long long videoInputFrames;
@property long long reportInitInputFrames;
@property (nonatomic) long long sendAudioBitrate;
@property (nonatomic) long long receiveAudioBitrate;
@property (nonatomic) long long sendVideoBitrate;
@property (nonatomic) long long receiveVideoBitrate;
@property (nonatomic) long long sendLocalVideoFps;
@property (copy, nonatomic) NSString *remoteLinkID;
@property (nonatomic) BOOL first_joined;
@property (nonatomic) BOOL reconneting;
@property (nonatomic) BOOL firstPushedVideoFrame;
@property (nonatomic) BOOL firstPushedAudioFrame;
@property (nonatomic) long long srcWidth;
@property (nonatomic) long long srcHeight;
@property (copy, nonatomic) NSString *srcFormat;
@property (nonatomic) BOOL needUpdateWH;
@property (nonatomic) long long rtc_tx_quality;
@property (copy, nonatomic) NSString *mix_type;
@property BOOL isAppActive;
@property (retain, nonatomic) IESLiveLinkRTCInteractCommunicationQosInfo *communicationQosInfo;
@property (nonatomic) double remoteUserJoinTime;

- (void)startJoinChannel;
- (void)startRemoteUserJoin;
- (id)getRtcStatsDict;
- (void)clearRtcStats;
- (long long)delaySinceReconnect;
- (void)startReconneting;
- (void)initStatData;
- (void)makeRemoteVideoFrozen;
- (long long)elapsed;
- (void).cxx_destruct;
- (id)init;

@end
