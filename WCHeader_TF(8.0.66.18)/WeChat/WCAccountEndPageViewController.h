@class NSString;

@interface WCAccountEndPageViewController : WCAccountBaseViewController

@property (retain, nonatomic) NSString *headlineText;
@property (retain, nonatomic) NSString *headTipsText;
@property (copy, nonatomic) id /* block */ onClichFinishBtnBlock;

- (BOOL)useSheetView;
- (void)viewDidLoad;
- (void)initView;
- (id)currentPhone;
- (id)currentUsername;
- (id)genDescItem:(id)a0 value:(id)a1;
- (BOOL)useRedesignStyle;
- (void)onFinished;
- (void).cxx_destruct;

@end
