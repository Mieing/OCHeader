@interface AWEStudioBaseNavigationController : UINavigationController

- (id)createNotificationUserInfo;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
