@class NSString, NSTimer, UILabel, NSNumber;

@interface IESECSliceXCartCountDownView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long styleEnum;
@property (nonatomic) double countDownTimeInterval;
@property (copy, nonatomic) NSString *daySuffix;
@property (copy, nonatomic) NSString *hourSuffix;
@property (copy, nonatomic) NSString *mintueSuffix;
@property (copy, nonatomic) NSString *secondSuffix;
@property (copy, nonatomic) NSNumber *originTimeStamp;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic) unsigned long long countDownAction;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)countDownEndAction;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)triggerCountDown;
- (void)timerEvent;
- (id)specificTimeWithHour:(int)a0 mintue:(int)a1 second:(int)a2;
- (void)invaliateTimer;
- (void)triggerCountDownHidden;
- (void)triggerCountDownRefresh;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;

@end
