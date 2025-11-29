@interface TingPlayAppMinimizeStayStatics : NSObject

@property (nonatomic) unsigned long long baseTimestamp;
@property (nonatomic) unsigned long long currState;
@property (nonatomic) unsigned long long fullStayTime;
@property (nonatomic) unsigned long long autoFoldStayTime;
@property (nonatomic) unsigned long long manualFoldStayTime;

- (id)init;
- (void)__calIncrementStayTimeForCurrState;
- (id)reportParams;

@end
