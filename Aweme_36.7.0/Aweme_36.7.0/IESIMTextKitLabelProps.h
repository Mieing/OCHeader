@class NSAttributedString;

@interface IESIMTextKitLabelProps : AWEIMUIViewPresenterProps

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textVerticalAlignment;
@property (copy, nonatomic) id /* block */ textTapAction;
@property (copy, nonatomic) NSAttributedString *displayAttributedText;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL asyncDisplay;
@property (nonatomic) long long lineBreakMode;

- (void).cxx_destruct;
- (id)init;

@end
