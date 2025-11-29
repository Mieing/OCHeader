@class RTCInfo, HTSLiveStreamUrl;

@interface DeviceConnectResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long viewId;
@property (nonatomic) long long roomId;
@property (retain, nonatomic) RTCInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;
@property (retain, nonatomic) HTSLiveStreamUrl *streamInfo;
@property (nonatomic) BOOL hasStreamInfo;

+ (id)descriptor;

@end
