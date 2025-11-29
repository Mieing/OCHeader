@class NSData;

@interface CommReportRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (nonatomic) unsigned int reportType;
@property (retain, nonatomic) NSData *reportData;

+ (void)initialize;

@end
