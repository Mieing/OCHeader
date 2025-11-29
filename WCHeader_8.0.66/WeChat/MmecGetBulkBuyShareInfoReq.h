@class BaseRequest, NSString;

@interface MmecGetBulkBuyShareInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *realappid;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long bulkbuyId;
@property (nonatomic) unsigned long long signatureVersion;
@property (retain, nonatomic) NSString *originPath;

+ (void)initialize;

@end
