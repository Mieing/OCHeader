@class NSString;

@interface IESLiveChorusAccompanist : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *subRtcRoomId;

+ (id)descriptor;

@end
