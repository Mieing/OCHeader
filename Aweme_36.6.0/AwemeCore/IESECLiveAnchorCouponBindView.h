@class UIView, NSString, IESECLiveRoomContext, IESECLiveApi, UIImageView, UIButton, UITextField, IESECLiveAnchorCouponCard, UILabel;

@interface IESECLiveAnchorCouponBindView : IESECLiveAnchorNavigationBaseView <UITextFieldDelegate, IESECLiveAnchorCouponCardDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) IESECLiveAnchorCouponCard *couponCard;
@property (retain, nonatomic) UIButton *bindButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (retain, nonatomic) UIImageView *hintImageView;
@property (retain, nonatomic) NSString *noticeText;
@property (nonatomic) BOOL hasBindAtLeastOneCoupon;
@property (nonatomic) unsigned long long previousTextLength;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCouponBindUI;
- (void)clearButtonFired:(id)a0;
- (id)confirmButtonTextColor;
- (void)confirmButtonFired:(id)a0;
- (void)_refreshUIWithInput:(id)a0;
- (id)confirmButtonDisableColor;
- (void)confirmButtonShouldShow:(BOOL)a0;
- (void)grantCoupon:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomID:(id)a1 roomContext:(id)a2 shouldShowMaskView:(BOOL)a3;
- (void)setBindNoticeText:(id)a0;
- (void)setInputNoticeText:(id)a0;
- (id)addWhitespceForText:(id)a0;
- (void)viewDidAppear;
- (void)pop;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidDisappear;
- (void)setHintText:(id)a0;

@end
