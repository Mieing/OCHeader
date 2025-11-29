@class MMUILabel, MMFullScreenShadeConfig;

@interface MMFullScreenShadeViewController : MMWindowViewController

@property (retain, nonatomic) MMUILabel *remindTextLabel;
@property (retain, nonatomic) MMFullScreenShadeConfig *shadeConfig;

- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onClicked;
- (void).cxx_destruct;

@end
