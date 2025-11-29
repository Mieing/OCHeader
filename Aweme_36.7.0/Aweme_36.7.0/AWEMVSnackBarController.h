@interface AWEMVSnackBarController : AWEDCFeedBaseController

@property (nonatomic) BOOL hasTriggerSnackBar;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)setupBinding;
- (id)mvPageContext;
- (void)judgmentCondition;
- (void)triggerShowSnackBarWithReason:(int)a0;
- (void)printStayTimeDic:(id)a0;
- (void)containerViewDidLoad;

@end
