@class NSData, NSString;

@interface PcadReportAdsReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int reportType;
@property (retain, nonatomic) NSData *reportLink;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSData *traceId;
@property (retain, nonatomic) NSString *posId;
@property (retain, nonatomic) NSString *reportExtraData;
@property (nonatomic) unsigned int notDisplayAdReason;
@property (retain, nonatomic) NSString *commonDeviceInfo;
@property (retain, nonatomic) NSString *commonDeviceId;

+ (void)initialize;

@end
