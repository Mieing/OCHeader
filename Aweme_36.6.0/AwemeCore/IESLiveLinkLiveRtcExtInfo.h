@class NSString, ByteRTCVideoEncoderConfig;

@interface IESLiveLinkLiveRtcExtInfo : NSObject

@property (copy, nonatomic) NSString *liveRtcAppId;
@property (copy, nonatomic) NSString *liveRtcAppSign;
@property (copy, nonatomic) NSString *liveRtcToken;
@property (copy, nonatomic) NSString *liveRtcRoomId;
@property (copy, nonatomic) NSString *liveRtcUserId;
@property (copy, nonatomic) NSString *liveRtcVendorName;
@property (nonatomic) long long liveRtcVendorType;
@property (copy, nonatomic) NSString *liveRtcbusinessID;
@property (nonatomic) long long liveMixType;
@property (nonatomic) long long liveRtcMixBitrateKbps;
@property (nonatomic) long long liveRtcMixServerVideoWidth;
@property (nonatomic) long long liveRtcMixServerVideoHeight;
@property (nonatomic) long long liveRtcMixServerVideoFps;
@property (nonatomic) long long liveRtcMixServerVideoBitRateKbps;
@property (nonatomic) long long liveRtcParamMode;
@property (retain, nonatomic) ByteRTCVideoEncoderConfig *liveRtcVideoInputParam;
@property (retain, nonatomic) ByteRTCVideoEncoderConfig *liveRtcPerformanceLowVideoParam;

- (void).cxx_destruct;
- (id)init;

@end
