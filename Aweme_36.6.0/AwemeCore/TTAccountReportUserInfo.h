@class TTAccountBadgerReportContext;

@interface TTAccountReportUserInfo : NSObject

@property (nonatomic) double startUpdateTime;
@property (retain, nonatomic) TTAccountBadgerReportContext *context;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
