@class NSMutableArray, NSString, NSArray, UILabel, UIView, UIButton;

@interface WCFinderSafePanelActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *bottomBtn;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (copy, nonatomic) id /* block */ clickSubTitleAction;
@property (copy, nonatomic) NSString *leftButtonMsg;
@property (copy, nonatomic) id /* block */ clickLeftButtonBlock;
@property (copy, nonatomic) NSString *rightButtonMsg;
@property (copy, nonatomic) id /* block */ clickRightButtonBlock;
@property (retain, nonatomic) NSArray *buttonModelArray;

+ (id)buildActionSheetByTitle:(id)a0 subTitle:(id)a1 clickSubTitleAction:(id /* block */)a2 rightButtonMsg:(id)a3 clickRightButtonBlock:(id /* block */)a4 leftButtonMsg:(id)a5 clickLeftButtonBlock:(id /* block */)a6;
+ (id)buildActionSheetByTitle:(id)a0 subTitle:(id)a1 clickSubTitleAction:(id /* block */)a2 buttonModelArray:(id)a3;
+ (id)genClickButtonMaxWidth:(double)a0 buttonStyle:(unsigned long long)a1 title:(id)a2 clickBlock:(id /* block */)a3;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (double)appendClickButtonsOnContentView:(id)a0 topLine:(double)a1;
- (void)bindSafeCheckPanelExposeReportCommentScene:(int)a0 showType:(unsigned long long)a1;
- (void)bindSafeCheckPanelSubviewClickReportCommentScene:(int)a0 showType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
