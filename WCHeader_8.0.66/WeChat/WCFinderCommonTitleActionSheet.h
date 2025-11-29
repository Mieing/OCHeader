@class UIButton, NSString, UIView;

@interface WCFinderCommonTitleActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (copy, nonatomic) NSString *leftButtonMsg;
@property (copy, nonatomic) id /* block */ clickLeftButtonBlock;
@property (copy, nonatomic) NSString *rightButtonMsg;
@property (copy, nonatomic) id /* block */ clickRightButtonBlock;
@property (copy, nonatomic) id /* block */ bindReportViewBlock;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (double)appendBottomView:(id)a0 bottomLine:(double)a1;
- (double)appendClickButtonsOnContentView:(id)a0 topLine:(double)a1;
- (void).cxx_destruct;

@end
