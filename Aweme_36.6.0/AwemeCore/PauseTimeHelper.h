@class LynxUI;

@interface PauseTimeHelper : NSObject

@property (nonatomic) double pauseTime;
@property (weak, nonatomic) LynxUI *ui;

- (id)initWithUI:(id)a0;
- (void)recordPauseTime;
- (double)getPauseDuration;
- (void).cxx_destruct;

@end
