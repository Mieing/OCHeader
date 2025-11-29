@class NSString, UILabel, UIView, UIButton;

@interface IESLiveBaseChargeAgreementView : UIView <IESLiveBaseChargeAgreementView>

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *agreementLabelA;
@property (retain, nonatomic) UIButton *manualAgreementButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *agreementLabelB;
@property (retain, nonatomic) UILabel *conjunctionLabel;
@property (nonatomic) BOOL showManualAgreement;
@property (nonatomic) BOOL didManualAgreement;
@property (nonatomic) BOOL isDarkMode;
@property (copy, nonatomic) id /* block */ manualAgreementChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapAgreementA;
- (void)tapAgreementB;
- (void)chargeAgreementViewOnTapped;
- (void)touchManualAgreementButton:(id)a0;
- (void)setDescribContentWithText:(id)a0 textColor:(id)a1 textFont:(id)a2 alignment:(long long)a3;
- (void)setAgreementContentWithTextA:(id)a0 textB:(id)a1 textColor:(id)a2 textFont:(id)a3 alignment:(long long)a4;
- (void)rechargePanelWithOutButton:(BOOL)a0;
- (void)setupNewUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)viewHeight;

@end
