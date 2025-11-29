@class UILabel, NSTimer, NSString;

@interface IESECSliceXBuyNowCountDownView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long styleEnum;
@property (nonatomic) long long countDownEndTime;
@property (copy, nonatomic) NSString *daySuffix;
@property (copy, nonatomic) NSString *hourSuffix;
@property (copy, nonatomic) NSString *mintueSuffix;
@property (copy, nonatomic) NSString *secondSuffix;
@property (nonatomic) BOOL isLaunch;
@property (copy, nonatomic) NSString *countDownEndAction;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)triggerCountDown;
- (void)timerEvent;
- (id)specificTimeWithHour:(int)a0 mintue:(int)a1 second:(int)a2;
- (void)invaliateTimer;
- (void)dealCountDownEndAction;
- (id)specificTimeWithDay:(int)a0 Hour:(int)a1 mintue:(int)a2 second:(int)a3;
- (id)initWithPreloadContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;

@end
