@class WCTableViewManager, NSDictionary;

@interface WCCanvasAuthManagementViewController : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewMgr;
@property (retain, nonatomic) NSDictionary *userInfo;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)updateTableCell;
- (id)genSwitchCellForSel:(SEL)a0 title:(id)a1 desc:(id)a2 on:(BOOL)a3;
- (void)opLocationPermission:(id)a0;
- (void)opAutoFillData:(id)a0;
- (void)reportUserAction:(id)a0 name:(id)a1;
- (void).cxx_destruct;

@end
