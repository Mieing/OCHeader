@class NSString;

@interface AWELiveShowPanelViewController : UIViewController

@property (nonatomic) BOOL isNotFirst;
@property (retain, nonatomic) NSString *videoId;

- (id)initWithVideoId:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
