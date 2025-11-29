@class NSString, YYTextLayout;

@interface AWEIMExchangeAnswerPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ coverTappedActionBlock;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bgUrl;
@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *exchangeHint;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (retain, nonatomic) YYTextLayout *textLayout;
@property (retain, nonatomic) YYTextLayout *exchangeHintLayout;

- (void).cxx_destruct;

@end
