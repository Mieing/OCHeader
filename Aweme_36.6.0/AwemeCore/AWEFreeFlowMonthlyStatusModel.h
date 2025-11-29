@class NSArray, NSNumber;

@interface AWEFreeFlowMonthlyStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *dailyStatusModelArray;
@property (retain, nonatomic) NSNumber *recordMonthlyStartTimestamp;
@property (nonatomic) BOOL showAlertBefore7;
@property (nonatomic) BOOL showAlertAfter25;
@property (nonatomic) BOOL setByUser;
@property (nonatomic) BOOL shouldPlay;

- (void)chooseOption:(BOOL)a0;
- (void)launchAppWithWifi:(BOOL)a0;
- (BOOL)hasReachNoAlertStatusAfter25;
- (void)addPauseOptionWithArray:(id)a0 withOption:(BOOL)a1;
- (void)addLaunchAppWithArray:(id)a0 withWifi:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
