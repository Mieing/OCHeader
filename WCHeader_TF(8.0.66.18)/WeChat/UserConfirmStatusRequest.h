@class BaseRequest, NSString;

@interface UserConfirmStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned int confirmStatus;
@property (nonatomic) unsigned long long notificationId;

+ (void)initialize;

@end
