@class CloudCollabRTCInfo, NSString, HTSLiveUser;

@interface CloudCollabUserInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) CloudCollabRTCInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;
@property (copy, nonatomic) NSString *roomIdStr;

+ (id)descriptor;

@end
