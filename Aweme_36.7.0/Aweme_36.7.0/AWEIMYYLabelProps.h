@class NSAttributedString;
@protocol YYTextLinePositionModifier;

@interface AWEIMYYLabelProps : AWEIMUIViewPresenterProps

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long textVerticalAlignment;
@property (copy, nonatomic) id /* block */ textTapAction;
@property (copy, nonatomic) id /* block */ willSetAttriStrBlock;
@property (copy, nonatomic) NSAttributedString *displayAttributedText;
@property (nonatomic) unsigned long long truncationType;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic) id<YYTextLinePositionModifier> linePositionModifier;
@property (nonatomic) BOOL asyncDisplay;
@property (nonatomic) BOOL useTextBoundingRect;
@property (nonatomic) long long lineBreakMode;

- (void).cxx_destruct;
- (id)init;

@end
