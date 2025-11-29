@class BaseRequest, NSString;

@interface CheckMchServicePosRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *followParam;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
