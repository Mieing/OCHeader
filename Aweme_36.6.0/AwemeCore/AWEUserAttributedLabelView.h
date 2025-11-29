@class UIFont, NSString, NSArray, TTTAttributedLabel, AWEUserAttributedLabelViewAccessibilityElement;
@protocol AWEUserAttributedLabelHighlightClickDelegate;

@interface AWEUserAttributedLabelView : UIView <TTTAttributedLabelDelegate, AWEUserAttributedLabelViewAccessibilityElementDelegate, AWEUserAttributedLabelLinkAccessibilityElementDelegate, UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *linkArray;
@property (retain, nonatomic) NSArray *URLArray;
@property (retain, nonatomic) NSArray *highlightArray;
@property (retain, nonatomic) AWEUserAttributedLabelViewAccessibilityElement *totalViewElement;
@property (retain, nonatomic) NSArray *accessibilityElements;
@property (retain, nonatomic) TTTAttributedLabel *label;
@property (nonatomic) BOOL needRemoveTotalViewElement;
@property (retain, nonatomic) UIFont *customFont;
@property (nonatomic) long long customAlignment;
@property (weak, nonatomic) id<AWEUserAttributedLabelHighlightClickDelegate> highlightClickDelegate;
@property (copy, nonatomic) NSArray *shouldShowNavBarLinks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2;
- (void)selectURL:(id)a0;
- (void)configLabel;
- (BOOL)accessibilityActivateWithAttributedLabelViewElement:(id)a0;
- (BOOL)accessibilityActivateWithAttributedLabelLinkElement:(id)a0;
- (id)initWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2 highlightArray:(id)a3;
- (void)updateLabelWithFont:(id)a0 textColor:(id)a1;
- (void)configLabelWithTextFont:(id)a0 textColor:(id)a1 linkColor:(id)a2 highlightColor:(id)a3;
- (void)updateWithText:(id)a0 linkArray:(id)a1 URLArray:(id)a2;
- (void).cxx_destruct;
- (void)updateLabel;

@end
