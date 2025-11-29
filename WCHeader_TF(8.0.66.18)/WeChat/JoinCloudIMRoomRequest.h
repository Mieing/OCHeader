@class BaseRequest, NSString;

@interface JoinCloudIMRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *privateData;

+ (void)initialize;

@end
