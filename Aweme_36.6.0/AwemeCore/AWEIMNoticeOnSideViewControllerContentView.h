@class NSString, UITableView;

@interface AWEIMNoticeOnSideViewControllerContentView : UIView <AWELeftSideBarCustomModuleDetailViewProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (double)leftSideBarStencilViewHeight;
- (void)__setupUI;
- (void).cxx_destruct;
- (id)init;

@end
