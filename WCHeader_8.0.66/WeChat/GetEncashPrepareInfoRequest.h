@class BaseRequest, NSMutableArray, NSString;

@interface GetEncashPrepareInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *businessId;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
