@class BaseRequest, NSString, NSData;

@interface PrepareWecoinConsumeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) int businessId;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *consumeProductId;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSData *extReq;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
