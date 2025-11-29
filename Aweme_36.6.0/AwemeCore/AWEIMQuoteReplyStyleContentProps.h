@class UIColor, NSAttributedString;

@interface AWEIMQuoteReplyStyleContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSAttributedString *quoteAttrString;
@property (copy, nonatomic) NSAttributedString *contentAttrString;
@property (copy, nonatomic) id /* block */ quoteTapAction;
@property (copy, nonatomic) id /* block */ bubbleTapAction;
@property (retain, nonatomic) UIColor *quoteReplyLineColor;

- (void).cxx_destruct;

@end
