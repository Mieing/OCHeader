@class NSString;

@interface HTSLiveNotifyMultiAvatarPublicStream : IESLivePBBaseMessage

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *mixStreamTaskId;
@property (copy, nonatomic) NSString *publicStreamId;

+ (id)descriptor;

@end
