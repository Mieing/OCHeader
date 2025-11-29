@class NSString, HTSLiveRTCInfo;

@interface HTSLiveDeviceViewInfo : IESLivePBBaseMessage

@property (nonatomic) long long deviceId;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) long long viewId;
@property (retain, nonatomic) HTSLiveRTCInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;

+ (id)descriptor;

@end
