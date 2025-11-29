@class CJPayDyPayHPMethodListCombineViewController, NSString;

@interface CJPayDyPayHPMethodListCombinePrimaryChooseViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayDyPayHPMethodListCombineViewController *primaryMethodViewController;
@property (copy, nonatomic) NSString *bankListStr;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (void)trackerName:(id)a0 params:(id)a1;
- (void)updateHalfPageTitle:(id)a0;
- (void)updateCombinePayPrimaryMethodList:(id)a0;
- (void)resetCurrentSelectShowConfigPositionWithIndexPath:(id)a0;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
