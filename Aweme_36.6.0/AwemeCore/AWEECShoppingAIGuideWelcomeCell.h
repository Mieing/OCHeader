@class AWEECShoppingAIGuideIncomingBubble, AWEECShoppingAIGuideCardSettingProvider, NSString, AWEECShoppingAIGuideTextCard, AWEECShoppingAIGuideAgreementTipView, AWEECShoppingAIGuideMessageGroupViewModel, AWEECShoppingAIGuideLynxCard;

@interface AWEECShoppingAIGuideWelcomeCell : AWEECShoppingAIGuideBaseCell <AWEECShoppingAIGuideLynxCardDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *welcomeViewModel;
@property (retain, nonatomic) AWEECShoppingAIGuideTextCard *welcomeTextCard;
@property (retain, nonatomic) AWEECShoppingAIGuideLynxCard *welcomeLynxCard;
@property (retain, nonatomic) AWEECShoppingAIGuideAgreementTipView *agreementTipView;
@property (retain, nonatomic) AWEECShoppingAIGuideIncomingBubble *welcomeTextBubble;
@property (nonatomic) double lynxCardHeight;
@property (weak, nonatomic) AWEECShoppingAIGuideCardSettingProvider *cardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForViewModel:(id)a0 withContext:(id)a1;

- (void)lynxCard:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldHideAgree;
- (void)updateOldWelcomeCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithViewModel:(id)a0;

@end
