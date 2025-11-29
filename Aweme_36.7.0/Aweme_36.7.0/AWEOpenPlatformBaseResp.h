@class NSString, NSMutableDictionary;

@interface AWEOpenPlatformBaseResp : BDPlatformSDKBaseResp

@property (retain, nonatomic) NSString *sdkStages;
@property (retain, nonatomic) NSString *sdkStagesTimestamp;
@property (retain, nonatomic) NSMutableDictionary *sdkTimeLineExtraInfo;

- (void).cxx_destruct;

@end
