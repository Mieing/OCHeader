@class BaseRequest, NSString;

@interface GetLandpageSmartPhoneReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long aid;
@property (nonatomic) unsigned int compId;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int sid;
@property (retain, nonatomic) NSString *pageId;

+ (void)initialize;

@end
