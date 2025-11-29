@class AWESettingBaseViewController;

@interface AWESettingSheetViewController : AFDSheetViewController

@property (retain, nonatomic) AWESettingBaseViewController *contentViewController;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithSettingViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
