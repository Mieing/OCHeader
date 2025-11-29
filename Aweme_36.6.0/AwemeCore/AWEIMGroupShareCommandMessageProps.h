@class UIFont, NSString, UIColor, AWEIMMessageConversation;

@interface AWEIMGroupShareCommandMessageProps : AWEIMUIViewPresenterProps

@property (nonatomic) double squareImageViewHeight;
@property (nonatomic) double squareImageViewWidth;
@property (retain, nonatomic) UIFont *tokenLabelFont;
@property (retain, nonatomic) NSString *tokenLabelStr;
@property (retain, nonatomic) UIColor *squareCardViewBGCollor;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ closeBtnTapAction;
@property (copy, nonatomic) id /* block */ shareBtnTapAction;
@property (copy, nonatomic) id /* block */ retryBtnTapAction;
@property (retain, nonatomic) AWEIMMessageConversation *conv;
@property (nonatomic) BOOL tokenLabelHidden;
@property (nonatomic) BOOL retryBtnHidden;

- (void).cxx_destruct;

@end
