@class NSString;

@interface MMFullScreenViewController : WCDragToCloseViewController <MMUIHookViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)OnMMUIHookViewFrameChanged:(id)a0;
- (void)viewDidLoad;

@end
