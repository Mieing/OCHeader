@class NSString;

@interface IESLiveShareViewToPanelGameInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *scheduleTime;
@property (copy, nonatomic) NSString *round;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
