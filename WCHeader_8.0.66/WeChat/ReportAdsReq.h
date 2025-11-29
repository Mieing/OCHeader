@class BaseRequest, NSData, NSString;

@interface ReportAdsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reportType;
@property (retain, nonatomic) NSData *reportLink;
@property (nonatomic) unsigned long long aid;
@property (retain, nonatomic) NSData *traceId;
@property (retain, nonatomic) NSString *posId;
@property (retain, nonatomic) NSString *reportExtraData;
@property (nonatomic) unsigned int notDisplayAdReason;
@property (retain, nonatomic) NSData *advertGroupId;
@property (nonatomic) unsigned int clickPos;
@property (nonatomic) unsigned int exposureType;
@property (nonatomic) unsigned int outerDuration;
@property (nonatomic) unsigned long long reportTs;

+ (void)initialize;

@end
