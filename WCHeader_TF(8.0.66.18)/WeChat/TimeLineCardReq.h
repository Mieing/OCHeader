@class BaseRequest, NSString;

@interface TimeLineCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long clientId;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) NSString *subType;

+ (void)initialize;

@end
