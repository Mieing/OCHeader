@class NSString, NSMutableDictionary;

@interface AWEOpenPlatformAuthReq : BDPlatformSDKGetAuthReq

@property (retain) NSString *sdkStages;
@property (retain) NSString *sdkStagesTimestamp;
@property (retain) NSMutableDictionary *sdkTimeLineExtraInfo;

- (void).cxx_destruct;

@end
