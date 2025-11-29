@class BaseRequest, NSString;

@interface UncheckMchServicePosRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *followParam;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
