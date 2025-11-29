@class CRGameChannelReportInfo, BaseResponse;

@interface GetGameDyeReportInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) CRGameChannelReportInfo *reportInfo;
@property (nonatomic) int reportType;

+ (void)initialize;

@end
