@class BaseRequest, NSString;

@interface ForeignHbReceiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nativeUrl;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int inWay;

+ (void)initialize;

@end
