@class NSString;

@interface WCFinderHalfScreenTipsViewController : MMPageSheetBaseViewController

@property (copy, nonatomic) NSString *titleTips;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *cancelTips;
@property (copy, nonatomic) NSString *confirmTips;
@property (copy, nonatomic) id /* block */ clickConfirmBtnBlock;
@property (copy, nonatomic) id /* block */ clickCancelBtnBlock;

- (id)initWithTipsTitle:(id)a0 tipsDetail:(id)a1 cancelButtonTitle:(id)a2 confirmButtonTitle:(id)a3;
- (double)pageSheetContentHeight;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupSubView;
- (void)onClickDoneBtn;
- (void)onCancelBtn;
- (void).cxx_destruct;

@end
