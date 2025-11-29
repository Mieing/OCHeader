@class NSString, AWEIMCellRealDisplayProxy;
@protocol AWEIMMessageTableViewInterface;

@interface IESIMCellRealDisplayProxyComponent : AWEIMComponentBase <AWEIMCellRealDisplayProxyDelegate, AWEIMMessageTableViewAction, AWEIMMessageListInputModuleAction>

@property (retain, nonatomic) AWEIMCellRealDisplayProxy *realDisplayProxy;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableViewDidScroll:(id)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)tableView:(id)a0 awe_realDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)refreshRealDisplayProxy;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
