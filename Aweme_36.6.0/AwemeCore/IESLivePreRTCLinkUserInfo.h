@class NSString;

@interface IESLivePreRTCLinkUserInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL rtcPushStream;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (nonatomic) int linkStatus;
@property (copy, nonatomic) NSString *anchorId;

+ (id)descriptor;

@end
