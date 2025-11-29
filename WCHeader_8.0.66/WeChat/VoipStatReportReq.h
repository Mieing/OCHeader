@class BaseRequest, VoipStatReportData, NSMutableArray;

@interface VoipStatReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) VoipStatReportData *reportData;
@property (retain, nonatomic) VoipStatReportData *channelReportData;
@property (retain, nonatomic) VoipStatReportData *dialReportData;
@property (retain, nonatomic) VoipStatReportData *engineReportData;
@property (nonatomic) unsigned long long timestamp64;
@property (retain, nonatomic) VoipStatReportData *engineExtReportData;
@property (nonatomic) unsigned int natReportCnt;
@property (retain, nonatomic) NSMutableArray *natReport;
@property (nonatomic) unsigned int directConnCnt;
@property (retain, nonatomic) NSMutableArray *directConnReports;
@property (nonatomic) unsigned int relayConnCnt;
@property (retain, nonatomic) NSMutableArray *relayConnReports;
@property (nonatomic) unsigned int engineMpReportCnt;
@property (retain, nonatomic) NSMutableArray *engineMpReports;

+ (void)initialize;

@end
