@class UIStackView, NSTimer, UILabel, NSDate;
@protocol AWEECOMIMCardCountdownDelegate;

@interface AWEECOMIMCardCountdownLabel : UIView

@property (retain, nonatomic) UIStackView *layoutView;
@property (retain, nonatomic) UILabel *minuteValueLabel;
@property (retain, nonatomic) UILabel *minuteUnitLabel;
@property (retain, nonatomic) UILabel *secondValueLabel;
@property (retain, nonatomic) UILabel *secondUnitLabel;
@property (weak, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) unsigned long long countdownTime;
@property (weak, nonatomic) id<AWEECOMIMCardCountdownDelegate> delegate;

- (void)counting:(id)a0;
- (void)updateTime;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)dealloc;

@end
