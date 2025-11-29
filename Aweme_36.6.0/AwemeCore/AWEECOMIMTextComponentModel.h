@class UIFont, NSString, UIColor, NSDictionary, NSAttributedString;

@interface AWEECOMIMTextComponentModel : NSObject

@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) NSString *originText;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSAttributedString *attributeText;
@property (copy, nonatomic) NSString *markdownMessageString;
@property (nonatomic) BOOL isLinkRisk;
@property (nonatomic) BOOL isSendByMe;
@property (nonatomic) double maxCellWidth;
@property (copy, nonatomic) NSString *pigeonBizType;

- (void)setTextAndTextSizeWithText:(id)a0 font:(id)a1 textColor:(id)a2;
- (id)initWithOriginalText:(id)a0 font:(id)a1 textColor:(id)a2 pigeonBizType:(id)a3;
- (void)bindTextColor:(id)a0;
- (void)setTextAndTextSizeWithText:(id)a0 font:(id)a1 textColor:(id)a2 attributes:(id)a3;
- (id)initWithOriginalText:(id)a0 font:(id)a1 textColor:(id)a2 attributes:(id)a3 pigeonBizType:(id)a4;
- (void).cxx_destruct;

@end
