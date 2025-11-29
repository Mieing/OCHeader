@class NSString, RTCInfo;

@interface DeviceViewInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isTrackedShow;
@property (nonatomic) long long deviceId;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) int status;
@property (nonatomic) long long viewId;
@property (retain, nonatomic) RTCInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;

+ (id)descriptor;

@end
