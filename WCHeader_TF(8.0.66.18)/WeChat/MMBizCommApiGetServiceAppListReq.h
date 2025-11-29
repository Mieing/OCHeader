@class BaseRequest, NSString;

@interface MMBizCommApiGetServiceAppListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *tpaCountry;

+ (void)initialize;

@end
