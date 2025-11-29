@class NSTimer, UILabel, UIView, UIButton;
@protocol AWELandscapeReolutionReminderDelegate;

@interface AWELandscapeReolutionReminder : UIView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) long long state;
@property (nonatomic) BOOL inLock;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long manualGearType;
@property (retain, nonatomic) NSTimer *quietTimer;
@property (weak, nonatomic) id<AWELandscapeReolutionReminderDelegate> delegate;

- (void)triggerQuietTimerWithState:(long long)a0;
- (void)resetQuietTimer;
- (void)updateLockStatus:(BOOL)a0;
- (void)updateLayoutWithBottomOffset:(double)a0;
- (void)showOnView:(id)a0 changeToState:(long long)a1 manualGearsType:(unsigned long long)a2 bottomOffset:(double)a3 inLock:(BOOL)a4;
- (void)updateUIWithState:(long long)a0 inLock:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissView;

@end
