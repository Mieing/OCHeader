@class BaseRequest, NSString;

@interface CheckUserStarRecordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;

+ (void)initialize;

@end
