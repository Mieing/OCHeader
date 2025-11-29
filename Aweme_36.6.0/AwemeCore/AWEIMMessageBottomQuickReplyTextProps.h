@class UIColor, NSAttributedString;

@interface AWEIMMessageBottomQuickReplyTextProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
