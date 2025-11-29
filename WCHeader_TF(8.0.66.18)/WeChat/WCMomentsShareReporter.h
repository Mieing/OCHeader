@class WCMomentsPostShareBaseViewModel;

@interface WCMomentsShareReporter : NSObject

@property (readonly, weak, nonatomic) WCMomentsPostShareBaseViewModel *model;

- (id)initWithModel:(id)a0;
- (id)viewReportID;
- (id)genCommonReportParams;
- (id)genReportParamsWithAction:(long long)a0;
- (void)reportCustomWithAction:(long long)a0 withCustomInfo:(id)a1;
- (void).cxx_destruct;

@end
