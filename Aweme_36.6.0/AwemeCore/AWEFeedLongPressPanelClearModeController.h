@class NSString;

@interface AWEFeedLongPressPanelClearModeController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRefresh;
- (void)enterPureMode:(id)a0;
- (void)postExitClearScreenNotificationIfNeeded:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)appDidEnterBackground;
- (void)viewWillDisappear;

@end
