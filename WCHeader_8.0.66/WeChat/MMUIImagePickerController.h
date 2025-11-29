@class NSString;

@interface MMUIImagePickerController : UIImagePickerController <WCAudioModuleDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;

@end
