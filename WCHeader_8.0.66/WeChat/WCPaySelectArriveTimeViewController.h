@class EnterTimeItem, WCPayTransBankItem;
@protocol WCPaySelectArriveTimeViewControllerDelegate;

@interface WCPaySelectArriveTimeViewController : WCPayBaseViewController

@property (nonatomic) EnterTimeItem *m_arriveTimeItem;
@property (retain, nonatomic) WCPayTransBankItem *m_bankItem;
@property (weak, nonatomic) id<WCPaySelectArriveTimeViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)OnReturn;
- (void)reloadData;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0;
- (void).cxx_destruct;

@end
