@class NSString;

@interface IESLiveReportProfitCheckTaskDataProfitCheckTaskDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *exhibitionInfoTask;
@property (copy, nonatomic) NSString *userHonorTask;
@property (copy, nonatomic) NSString *wishInfoTask;
@property (copy, nonatomic) NSString *fansClubTask;
@property (copy, nonatomic) NSString *audienceRanklist;
@property (copy, nonatomic) NSString *linkmicContributeRanklist;
@property (copy, nonatomic) NSString *generalTask;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
