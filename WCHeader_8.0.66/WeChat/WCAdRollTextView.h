@class MMTimer, MMUILabel, NSArray;

@interface WCAdRollTextView : MMUIView

@property (retain, nonatomic) MMUILabel *currentLabel;
@property (retain, nonatomic) MMUILabel *nextLabel;
@property (retain, nonatomic) MMTimer *animateTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL pauseFlag;
@property (copy, nonatomic) NSArray *textList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initTimer;
- (void)refreshLabelText;
- (void)rollLabel;
- (void)setViewBeforeRoll;
- (void)setViewAfterRoll;
- (BOOL)canRoll;
- (void)tryStartRoll;
- (void)stopRoll;
- (void)setHidden:(BOOL)a0;
- (void)initNotificationObserver;
- (void)onViewDidEnterBackground:(id)a0;
- (void)onViewDidBecomeActive:(id)a0;
- (void).cxx_destruct;

@end
