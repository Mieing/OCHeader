@class BrandServiceContinueLocationReportLogic;

@interface BrandLocationReportLogicAlertOberserver : NSObject

@property (weak, nonatomic) BrandServiceContinueLocationReportLogic *weakReportLogic;

+ (id)sharedInstance;

- (void)askIsAllowReportLocation:(id)a0;
- (void).cxx_destruct;

@end
