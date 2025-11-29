@class NSString;

@interface BDHookManagerUIViewController : BDSystemClassHookManager <UIViewControllerBDHookProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)viewControllerLoadView:(id)a0;
+ (void)viewControllerViewDidLoad:(id)a0;
+ (void)viewController:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
+ (void)viewController:(id)a0 dismissViewController:(BOOL)a1 completion:(id /* block */)a2;
+ (void)viewControllerViewDidLayoutSubviews:(id)a0;
+ (void)viewController:(id)a0 viewWillDisappear:(BOOL)a1;
+ (void)viewController:(id)a0 viewWillAppear:(BOOL)a1;
+ (void)viewController:(id)a0 viewDidDisappear:(BOOL)a1;
+ (void)viewController:(id)a0 viewDidAppear:(BOOL)a1;


@end
