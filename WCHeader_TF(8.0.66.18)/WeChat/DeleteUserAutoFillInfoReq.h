@class BaseRequest, NSString;

@interface DeleteUserAutoFillInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *groupKey;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int collectId;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
