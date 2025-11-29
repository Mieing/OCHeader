@interface SharePreConfirmViewController : MMUIViewController

@property (nonatomic) BOOL willRotateToPreviousOrientation;
@property (copy, nonatomic) id /* block */ didTransitionToNewSizeBlock;
@property (nonatomic) unsigned long long overrideOrientationMask;

- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void).cxx_destruct;

@end
