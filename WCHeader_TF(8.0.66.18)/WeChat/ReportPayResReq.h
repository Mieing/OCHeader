@class BaseRequest, NSString;

@interface ReportPayResReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferBillId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned int unpayType;

+ (void)initialize;

@end
