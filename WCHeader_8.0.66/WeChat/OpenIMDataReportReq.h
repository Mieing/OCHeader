@class BaseRequest, OpenIMReportJoinRoomByQrcode, OpenIMReportScanMultiRoomQrcode;

@interface OpenIMDataReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reportType;
@property (retain, nonatomic) OpenIMReportJoinRoomByQrcode *reportJoinRoomByQrcode;
@property (retain, nonatomic) OpenIMReportScanMultiRoomQrcode *reportScanMultiRoomQrcode;

+ (void)initialize;

@end
