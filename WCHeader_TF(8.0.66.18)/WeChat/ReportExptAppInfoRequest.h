@class BaseRequest, NSMutableArray, ExptAppDeviceType;

@interface ReportExptAppInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long opBeginMs;
@property (nonatomic) unsigned long long opEndMs;
@property (retain, nonatomic) NSMutableArray *reportItems;
@property (retain, nonatomic) ExptAppDeviceType *exptAppDeviceType;

+ (void)initialize;

@end
