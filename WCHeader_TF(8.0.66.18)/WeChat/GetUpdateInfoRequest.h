@class BaseRequest;

@interface GetUpdateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int updateType;
@property (nonatomic) unsigned int channel;

+ (void)initialize;

@end
