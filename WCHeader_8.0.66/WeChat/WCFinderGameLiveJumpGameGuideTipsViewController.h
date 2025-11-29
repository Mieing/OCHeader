@class MMUIButton;

@interface WCFinderGameLiveJumpGameGuideTipsViewController : MMTipsViewController

@property (retain, nonatomic) MMUIButton *checkBox;
@property (copy, nonatomic) id /* block */ switchHandler;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL enableGuide;

- (id)initWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5 switchHandler:(id /* block */)a6;
- (void)onCheckBoxClick:(id)a0;
- (void).cxx_destruct;

@end
