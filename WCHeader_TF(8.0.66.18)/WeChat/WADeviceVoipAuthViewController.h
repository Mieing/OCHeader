@class NSArray, NSMutableSet;

@interface WADeviceVoipAuthViewController : ZZFLEXTableViewController

@property (retain, nonatomic) NSMutableSet *statusChangedDevice;
@property (retain, nonatomic) NSArray *deviceList;

- (id)init;
- (void)viewDidLoad;
- (void)reloadUI;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
