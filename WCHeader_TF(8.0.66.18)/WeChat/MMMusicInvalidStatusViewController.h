@class NSString, WCFinderFeedDetailStatusView;

@interface MMMusicInvalidStatusViewController : MMUIViewController

@property (retain, nonatomic) WCFinderFeedDetailStatusView *finderStatusView;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *msgText;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)onTappedClose;
- (void).cxx_destruct;

@end
