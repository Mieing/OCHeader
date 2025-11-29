@class NSTimer, NSMutableArray;

@interface CGVibratorManager : CGObject

@property (retain, nonatomic) NSMutableArray *vibratorArray;
@property (retain, nonatomic) NSTimer *checkTimer;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)checkAllVibrator;
- (void)createVibratorWithDict:(id)a0;
- (void)destroyAllVibrator:(id)a0;
- (void)handleVibratorWithData:(id)a0;
- (void)vibrateOnce;
- (void).cxx_destruct;

@end
