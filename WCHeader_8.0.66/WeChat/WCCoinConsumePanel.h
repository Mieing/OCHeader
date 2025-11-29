@class WCCoinConsumePanelDetailView, WCCoinConsumeParameter;
@protocol WCCoinConsumePanelDelegate;

@interface WCCoinConsumePanel : MMPageSheetBaseViewController

@property (retain, nonatomic) WCCoinConsumePanelDetailView *panelDetailView;
@property (weak, nonatomic) id<WCCoinConsumePanelDelegate> delegate;
@property (retain, nonatomic) WCCoinConsumeParameter *parameter;
@property (nonatomic) long long wecoinBalance;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)clickBalanceButton;
- (BOOL)enoughCoin;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
