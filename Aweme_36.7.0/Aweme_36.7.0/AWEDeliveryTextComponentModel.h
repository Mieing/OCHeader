@class UIFont, NSString, UIColor, NSAttributedString;

@interface AWEDeliveryTextComponentModel : NSObject

@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) NSString *originText;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSAttributedString *attributeText;
@property (nonatomic) BOOL isLinkRisk;
@property (nonatomic) BOOL isSendByMe;
@property (copy, nonatomic) NSString *pigeonBizType;

- (void)setTextAndTextSizeWithText:(id)a0 font:(id)a1 textColor:(id)a2;
- (id)initWithOriginalText:(id)a0 font:(id)a1 textColor:(id)a2 pigeonBizType:(id)a3;
- (void)bindTextColor:(id)a0;
- (void).cxx_destruct;

@end
