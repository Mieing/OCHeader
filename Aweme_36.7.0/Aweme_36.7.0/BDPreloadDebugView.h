@class UILabel;

@interface BDPreloadDebugView : UIView

@property (class, readonly, nonatomic) BOOL enable;

@property (retain, nonatomic) UILabel *finishLabel;
@property (retain, nonatomic) UILabel *runningLabel;
@property (retain, nonatomic) UILabel *pendingLabel;
@property (retain, nonatomic) UILabel *waitingLabel;

+ (BOOL)isIPhoneXSeries;
+ (id)createLabelWithColor:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_setup;

@end
