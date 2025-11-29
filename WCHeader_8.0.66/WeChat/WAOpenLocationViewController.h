@class WAOpenLocationViewControllerHandler;
@protocol WAOpenLocationViewControllerDelegate;

@interface WAOpenLocationViewController : MMViewLocationViewController

@property (retain, nonatomic) WAOpenLocationViewControllerHandler *handler;
@property (weak, nonatomic) id<WAOpenLocationViewControllerDelegate> waDelegate;

- (id)initWithPOIInfo:(id)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void).cxx_destruct;

@end
