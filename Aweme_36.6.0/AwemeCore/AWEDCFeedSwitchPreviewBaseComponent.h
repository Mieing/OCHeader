@class NSString;

@interface AWEDCFeedSwitchPreviewBaseComponent : AWEBaseController <AWEDCFeedSwitchPreviewComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)quitWithSelectIndex:(long long)a0 animated:(BOOL)a1;
- (void)beginMoveInAnimation;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
