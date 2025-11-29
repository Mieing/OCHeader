@interface OpenIMSocialInfomationViewController : SocialInfomationViewController

- (void)viewDidLoad;
- (void)reloadTableView;
- (void)addRemarkSectionAndPermissions;
- (void)addIntroCellAtSection:(id)a0;
- (void)addMoreInfos;
- (void)makeOpenIMNormalCell:(id)a0 CellInfo:(id)a1;
- (void)onOpenIMNormalClicked:(id)a0;

@end
