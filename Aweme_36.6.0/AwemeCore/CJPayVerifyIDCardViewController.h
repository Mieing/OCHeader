@class CJPayIDCardLast6DigitsInputView, CJPayBDCreateOrderResponse, NSString, UILabel, CJPayStyleErrorLabel;
@protocol CJPayTrackerProtocol;

@interface CJPayVerifyIDCardViewController : CJPayFullPageBaseViewController <CJPayVerifyIDVCProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayIDCardLast6DigitsInputView *inputModule;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTips:(id)a0;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)updateErrorText:(id)a0;
- (void)p_applyStyle;
- (id)p_attributedDescString;
- (void)p_setupUI;
- (void)clearInput;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end
