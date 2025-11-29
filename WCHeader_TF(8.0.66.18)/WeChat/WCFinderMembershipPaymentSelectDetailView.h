@class KindaUILabel, WCCoinConsumeParameter, NSArray, NSString, UIView, RichTextView, UIButton;
@protocol WCFinderMembershipPaymentSelectDetailViewDelegate;

@interface WCFinderMembershipPaymentSelectDetailView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) UIButton *selectBoxButton;
@property (retain, nonatomic) RichTextView *protocolTextView;
@property (retain, nonatomic) UIView *rowContainView;
@property (nonatomic) unsigned long long selectedTag;
@property (retain, nonatomic) RichTextView *subTitle;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) KindaUILabel *statementLabel;
@property (retain, nonatomic) WCCoinConsumeParameter *parameter;
@property (weak, nonatomic) id<WCFinderMembershipPaymentSelectDetailViewDelegate> delegate;
@property (retain, nonatomic) NSArray *memberPriceArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parameter:(id)a1 memberPriceArray:(id)a2;
- (void)layout;
- (void)layoutTitle;
- (void)layoutPayCoinView;
- (void)layoutSubTitle;
- (void)layoutAgreement;
- (void)layoutButton;
- (void)layoutStatement;
- (void)shakeAgreementView;
- (void)consume;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clickCoin:(id)a0;
- (void).cxx_destruct;

@end
