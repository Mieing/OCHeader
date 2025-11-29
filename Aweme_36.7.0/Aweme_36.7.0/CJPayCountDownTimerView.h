@class UILabel;
@protocol CJPayCountDownTimerViewDelegate;

@interface CJPayCountDownTimerView : CJPayTimerView

@property (retain, nonatomic) UILabel *titleL;
@property (nonatomic) BOOL curTimeIsValid;
@property (weak, nonatomic) id<CJPayCountDownTimerViewDelegate> delegate;
@property (nonatomic) long long style;

- (void)startTimerWithCountTime:(int)a0;
- (void)currentCountChangeTo:(int)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)reset;

@end
