@class NSString;

@interface AWETeenMultiVideoViewController : AWETeenFeedBaseViewController <UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 vcType:(long long)a2 extra:(id)a3;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
