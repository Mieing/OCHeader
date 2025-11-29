@class MMTableViewInfo;

@interface StatusRepairViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (nonatomic) struct CGPoint { double x; double y; } layoutOrigin;

- (void)viewDidLoad;
- (void)onSwitchCell:(id)a0 cell:(id)a1;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
