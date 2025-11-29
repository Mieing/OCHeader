@class WCPayProfession, NSArray;
@protocol WCPayGetProfessionViewControllerDelegate;

@interface WCPayGetProfessionViewController : WCPayBaseViewController

@property (retain, nonatomic) WCPayProfession *selectedProfession;
@property (retain, nonatomic) NSArray *professions;
@property (weak, nonatomic) id<WCPayGetProfessionViewControllerDelegate> delegate;

- (id)initWithProfessions:(id)a0;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)clickInfoCell:(id)a0;
- (void).cxx_destruct;

@end
