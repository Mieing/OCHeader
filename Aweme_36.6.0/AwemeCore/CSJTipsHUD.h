@class UILabel;

@interface CSJTipsHUD : NSObject

@property (retain, nonatomic) UILabel *hudLabel;

- (void)hideHUD;
- (void)backupAction;
- (void)showHUDWithTips:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
