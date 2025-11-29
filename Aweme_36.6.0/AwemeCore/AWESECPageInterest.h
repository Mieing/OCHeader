@class NSString;

@interface AWESECPageInterest : NSObject <UIViewControllerBDHookProtocol>

@property BOOL hmdUITrackerWorking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (void)viewController:(id)a0 viewDidDisappear:(BOOL)a1;
+ (void)viewController:(id)a0 viewDidAppear:(BOOL)a1;

- (void)setupHMDUpdate;
- (void)hmdSceneDidChange;
- (void)setup;

@end
