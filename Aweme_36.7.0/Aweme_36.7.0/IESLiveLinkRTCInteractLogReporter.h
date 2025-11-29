@class IESLiveLinkRTCLogReportInfo;
@protocol IESLiveLinkRTCLogReportDelegate;

@interface IESLiveLinkRTCInteractLogReporter : NSObject

@property unsigned long long rtcReportId;
@property (retain, nonatomic) IESLiveLinkRTCLogReportInfo *info;
@property (weak, nonatomic) id<IESLiveLinkRTCLogReportDelegate> delegate;

- (void)reportInteractStatusLog:(id)a0 params:(id)a1;
- (void)setupWithReportInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)commonLog;

@end
