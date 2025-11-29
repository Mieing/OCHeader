@class BaseRequest, NSString;

@interface MmecGetEcJumpInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long bulkbuyId;
@property (nonatomic) unsigned int reqType;

+ (void)initialize;

@end
