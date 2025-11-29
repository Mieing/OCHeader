@class BaseRequest, NSString;

@interface OpenLqbAccountReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ecardType;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
