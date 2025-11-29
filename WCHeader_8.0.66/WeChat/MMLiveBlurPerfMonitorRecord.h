@class UIView;

@interface MMLiveBlurPerfMonitorRecord : MMLiveUIPerfMonitorRecord

@property (weak, nonatomic) UIView *blurView;

+ (id)getMonitorBlurViewKey:(id)a0;

- (id)initWithBlurView:(id)a0;
- (BOOL)startMonitorIfNeed;
- (void)autoUpdateComposeRect;
- (BOOL)isBlurViewValid;
- (BOOL)isValid;
- (void)clear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currPresentFrame;
- (id)rootView;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (void).cxx_destruct;

@end
