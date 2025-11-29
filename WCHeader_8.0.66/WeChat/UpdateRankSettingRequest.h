@class BaseRequest;

@interface UpdateRankSettingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
