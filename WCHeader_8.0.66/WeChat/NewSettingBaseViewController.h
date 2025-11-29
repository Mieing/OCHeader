@class NSString, MMTableViewInfo;

@interface NewSettingBaseViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) NSString *m_nsTitle;
@property (readonly, nonatomic) MMTableViewInfo *tableViewInfo;

- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesEnded:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesCancelled:(id)a1 withEvent:(id)a2;
- (id)initWithTitle:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadTableData;
- (void).cxx_destruct;

@end
