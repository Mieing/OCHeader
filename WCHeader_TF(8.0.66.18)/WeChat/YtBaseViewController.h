@interface YtBaseViewController : UIViewController

@property (copy, nonatomic) id /* block */ succeedBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (void)viewWillAppear:(BOOL)a0;
- (void)naviBack;
- (void)quitViewController;
- (id)YtCreateImageWithColor:(id)a0;
- (void).cxx_destruct;

@end
