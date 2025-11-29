@class BaseRequest;

@interface SnsObjectDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int groupDetail;

+ (void)initialize;

@end
