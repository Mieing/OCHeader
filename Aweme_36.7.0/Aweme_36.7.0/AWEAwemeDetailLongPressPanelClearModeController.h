@class NSString;

@interface AWEAwemeDetailLongPressPanelClearModeController : AWEAwemeNewDetailBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterPureMode:(id)a0;
- (void)postExitClearScreenNotificationIfNeeded:(id)a0;
- (BOOL)enableGeneralCellSupport;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidEnterBackground;
- (void)viewWillDisappear;

@end
