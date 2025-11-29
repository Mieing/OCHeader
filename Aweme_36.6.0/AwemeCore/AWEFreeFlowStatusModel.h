@class NSArray;

@interface AWEFreeFlowStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *totalFlowStatusModelArray;
@property (nonatomic) BOOL isFreeFlowUserCloseSwitchManually;

- (void)chooseOption:(BOOL)a0;
- (void)deleteExpiredModel;
- (void)launchAppWithWifi:(BOOL)a0;
- (id)findCurrentMonthModel;
- (void).cxx_destruct;
- (id)init;

@end
