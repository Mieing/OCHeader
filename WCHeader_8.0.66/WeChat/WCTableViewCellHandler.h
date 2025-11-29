@class DelaySwitchSettingLogic, MMUIViewController;

@interface WCTableViewCellHandler : NSObject

@property (weak, nonatomic) MMUIViewController *viewController;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;

- (id)initWithCurViewController:(id)a0;
- (id)genCellManager;
- (id)makeSwitchCellWithColName:(id)a0 action:(SEL)a1 on:(BOOL)a2 forbidOp:(BOOL)a3;
- (void)MMUIViewControllerWillDisppear:(id)a0;
- (void).cxx_destruct;

@end
