@class NSString;

@interface BDNewAutoReadViewController : BDNewScrollViewController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL pauseWhenEnterBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
