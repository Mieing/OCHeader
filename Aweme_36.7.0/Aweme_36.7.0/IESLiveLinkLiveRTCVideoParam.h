@class IESLiveLinkLiveRTCVideoBusinessParam, IESLiveLinkLiveRTCMixParam;

@interface IESLiveLinkLiveRTCVideoParam : NSObject

@property (nonatomic) long long rtcVideoParamMode;
@property (nonatomic) long long rtcMixType;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *rtcVideoParamServerDefine;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *rtcVideoParam1v1Client;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *rtcVideoParam1v1Server;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *rtcPerformanceLow;
@property (retain, nonatomic) IESLiveLinkLiveRTCMixParam *rtcMixParam;

- (void).cxx_destruct;

@end
