@class BaseRequest, NSString;

@interface ForeignHbDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nativeUrl;
@property (nonatomic) unsigned int limit;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
