@class NSString, UIView;
@protocol AWEFeedGuideRedButtonViewProtocol;

@interface AWEPlayInteractionLetsDuetElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEFeedGuideRedButtonViewProtocol> *letsDuetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)onLetsDuetViewClicked;
- (BOOL)shouldShowLetsDuet;
- (void)updateLetsDuetView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
