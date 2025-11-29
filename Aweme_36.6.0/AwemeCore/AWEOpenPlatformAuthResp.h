@class NSString, NSMutableDictionary;

@interface AWEOpenPlatformAuthResp : BDPlatformSDKGetAuthResp

@property (retain) NSString *stages;
@property (retain) NSString *stagesTimestamp;
@property (retain) NSMutableDictionary *sdkTimeLineExtraInfo;

- (void).cxx_destruct;

@end
