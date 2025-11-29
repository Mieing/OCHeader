@class NSArray;

@interface AWEUGAlertStrategyModel : NSObject

@property (retain, nonatomic) NSArray *showFrequencyModelArray;
@property (retain, nonatomic) NSArray *alertHideModelArray;
@property (nonatomic) long long timesDenied;

- (id)initWithAlertType:(id)a0 andStrategy:(id)a1;
- (id)showFrequencyModelArrayWithAlertType:(id)a0 andStrategy:(id)a1;
- (id)alertHideModelArrayWithAlertType:(id)a0 andStrategy:(id)a1;
- (long long)timesDenied:(id)a0 andStrategy:(id)a1;
- (void).cxx_destruct;

@end
