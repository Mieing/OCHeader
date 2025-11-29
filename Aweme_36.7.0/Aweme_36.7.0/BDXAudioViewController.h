@protocol BDXAudioViewControllerDelegate;

@interface BDXAudioViewController : UIViewController

@property (weak, nonatomic) id<BDXAudioViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
