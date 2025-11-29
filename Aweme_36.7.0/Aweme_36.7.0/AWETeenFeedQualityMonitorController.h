@class NSString;

@interface AWETeenFeedQualityMonitorController : AWETeenFeedBaseController

@property (retain, nonatomic) NSString *subScene;

- (void)beginRequestDataFromRefresh:(BOOL)a0;
- (void)endRequestDataSuccess:(BOOL)a0 error:(id)a1 fromRefresh:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
