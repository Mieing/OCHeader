@interface MMWebCanvasPopupRootViewController : MMUIViewController

@property (nonatomic) unsigned long long orientationMask;

- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;

@end
