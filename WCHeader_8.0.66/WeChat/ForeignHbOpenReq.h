@class BaseRequest, NSString;

@interface ForeignHbOpenReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nativeUrl;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *sessionUserName;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *timingIdentifier;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int inWay;

+ (void)initialize;

@end
