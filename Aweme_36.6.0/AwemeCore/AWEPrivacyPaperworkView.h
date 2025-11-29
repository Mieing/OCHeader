@class NSString, NSArray, TTTAttributedLabel, UIScrollView, AWEPrivacyAlertViewAccessibilityElement;

@interface AWEPrivacyPaperworkView : UIView <TTTAttributedLabelDelegate, AWEPrivacyAlertLinkAccessibilityElementDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *linkArray;
@property (retain, nonatomic) NSArray *URLArray;
@property (retain, nonatomic) TTTAttributedLabel *label;
@property (retain, nonatomic) NSArray *accessibilityElements;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEPrivacyAlertViewAccessibilityElement *protocolAccessibilityElement;
@property (copy, nonatomic) id /* block */ backToFirstWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPrivacyAlertAdapterClass;
+ (Class)aAWEPrivacyExternServiceClass;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPrivacyExternService;
- (id)aAWEPrivacyAlertAdapter;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2;
- (BOOL)accessibilityActivateWithUserProtocolLinkElement:(id)a0;
- (void)configAttributedLabel;
- (void)selectURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
