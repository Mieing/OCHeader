@class BDPUniqueID, UIView;

@interface AWELxPayModalViewController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (id)initWithUniqueID:(id)a0 contentView:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
