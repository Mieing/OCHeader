@class CHHapticParameterCurve, AACWeakTimer;

@interface CHHapticParameterCurveModel : NSObject

@property (retain, nonatomic) AACWeakTimer *cuveModeltimer;
@property (retain, nonatomic) CHHapticParameterCurve *parameters;
@property (nonatomic) float time;

- (void)startTimer:(id)a0 :(id)a1;
- (void)scheduleParameterCurve:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
