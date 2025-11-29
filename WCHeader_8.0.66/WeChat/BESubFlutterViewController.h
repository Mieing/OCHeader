@class BSTLExptConfig, BSTimelineFlutterPlugin;

@interface BESubFlutterViewController : MMFlutterViewController

@property (retain, nonatomic) BSTimelineFlutterPlugin *apiImpl;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) BSTLExptConfig *exptConfig;

- (id)initWithExptConfig:(id)a0 route:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)registerPlugin;
- (void)didTakeSnapshot:(id)a0;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
