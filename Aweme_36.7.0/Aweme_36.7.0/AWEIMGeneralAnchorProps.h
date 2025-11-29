@class NSString, UIColor;

@interface AWEIMGeneralAnchorProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ anchorViewTapped;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldHideAnchor;
@property (retain, nonatomic) UIColor *anchorColor;
@property (copy, nonatomic) NSString *accessibilityLabelText;

- (void).cxx_destruct;
- (id)init;

@end
