@class BaseRequest, NSString, PayGenActionLocation;

@interface GetCreateTokenSignReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *takeMessage;
@property (nonatomic) unsigned long long creditLine;
@property (retain, nonatomic) PayGenActionLocation *location;

+ (void)initialize;

@end
