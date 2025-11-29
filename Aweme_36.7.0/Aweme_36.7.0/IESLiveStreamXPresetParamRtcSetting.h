@class NSString;

@interface IESLiveStreamXPresetParamRtcSetting : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcChannelId;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcUserId;

+ (id)descriptor;

@end
