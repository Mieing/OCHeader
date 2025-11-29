@class NSString, CJPayLoadingButton, CJPayButton, UILabel, CJPayCommonProtocolView, CJPayCommonProtocolModel;

@interface CJPayProtocolPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayLoadingButton *confirmButton;
@property (retain, nonatomic) CJPayButton *cancelButton;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ clickProtocolBlock;
@property (nonatomic) BOOL showFullPageProtocolView;

- (void)p_cancel;
- (void)showLoading:(BOOL)a0;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (id)initWithProtocolModel:(id)a0 from:(id)a1;
- (void)p_confirmButtonClick;
- (void)p_updateProtocolContent;
- (void)p_updateProtocolClickPageStyle;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
