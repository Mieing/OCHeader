@class NSString;

@interface CloudCollabRTCInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) int rtcRole;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
