@class WCPayWebImageView, NSString, UIImageView, UITextField, UIButton, WCPayControlData;
@protocol WCPayQRCodeRewardCodeViewDelegate;

@interface WCPayQRCodeRewardCodeView : MMUIView <UITextFieldDelegate>

@property (weak, nonatomic) id<WCPayQRCodeRewardCodeViewDelegate> delegate;
@property (retain, nonatomic) WCPayControlData *controlData;
@property (nonatomic) long long currentCodeDisplayMode;
@property (retain, nonatomic) NSString *inputContent;
@property (retain, nonatomic) WCPayWebImageView *codeImageView;
@property (retain, nonatomic) UIImageView *headImgView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *photoHitButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 codeDelegate:(id)a1 controlData:(id)a2;
- (void)setupContentView;
- (void)updateAccessibility;
- (id)getSelfHeaderImageViewWithImgLen:(double)a0;
- (BOOL)loadCacheCodeViewIfExist;
- (void)photoHitBtnClick;
- (void)changeToHeadImgMode;
- (void)changeToInputMode;
- (void)codeViewSetWordingSucc;
- (void)codeViewSetWordingFail;
- (void)codeViewRemovewordingSucc;
- (void)codeViewRemoveWordingFail;
- (void)confirmChangeToHeadImgMode;
- (void)confirmChangeToInputMode;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
