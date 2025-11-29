@class DYSyncToToutiaoAlertView;

@interface DYSyncToToutiaoAlertViewController : UIViewController

@property (nonatomic) long long alertType;
@property (nonatomic) long long clickedSwitchType;
@property (nonatomic) unsigned long long platformType;
@property (copy, nonatomic) id /* block */ requestAction;
@property (retain, nonatomic) DYSyncToToutiaoAlertView *alertView;

- (id)initWithAlertType:(long long)a0 clickedSwitchType:(long long)a1 platformType:(unsigned long long)a2 requestAction:(id /* block */)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
