@class NSString, NSArray, AWEUserProtocolViewAccessibilityElement, AWEUserAttributedLabelView, DYUserProtocolViewUIConfig, NSDictionary, DUXCheckBox, UIButton;

@interface DYUserProtocolView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, AWEUserProtocolViewAccessibilityElementDelegate, AWEUserAttributedLabelHighlightClickDelegate>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *linkArray;
@property (retain, nonatomic) NSArray *URLArray;
@property (retain, nonatomic) AWEUserProtocolViewAccessibilityElement *protocolAccessibilityElement;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) AWEUserAttributedLabelView *labelView;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (retain, nonatomic) NSArray *accessibilityElements;
@property (nonatomic) double labelLineHeight;
@property (retain, nonatomic) DYUserProtocolViewUIConfig *config;
@property (nonatomic) BOOL isConfirmAsAgree;
@property (nonatomic) BOOL isItemConfirmedByUser;
@property (nonatomic) BOOL enableUserProtocolOpt;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly, nonatomic) UIButton *selectButton;
@property (copy, nonatomic) id /* block */ didChangeConfirmState;
@property (copy, nonatomic) id /* block */ didTabHighlightArea;
@property (copy, nonatomic) NSArray *shouldShowNavBarLinks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultUserProtocolView:(id)a0;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEUserModuleAgreementInfoCommonAdapterClass;
+ (id)defaultUserProtocolView;

- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2;
- (void)didTapAttributedLabelHighlightArea;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2 needCarrier:(BOOL)a3 protocolViewUIConfig:(id)a4;
- (id)aAWEUserModuleAgreementInfoCommonAdapter;
- (void)shakeAnimationForCurrentView:(id /* block */)a0;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2 needCarrier:(BOOL)a3;
- (BOOL)accessibilityActivateWithUserProtocolViewElement:(id)a0;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2 protocolViewUIConfig:(id)a3;
- (void)p_updateAccessibilityValue;
- (void)selectAction;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setTextAlignment:(long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
