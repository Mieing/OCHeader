@class NSString, CSSStyleDeclaration;

@interface CSSStyleRule : CSSRule

@property (retain, nonatomic) NSString *selectorText;
@property (retain, nonatomic) CSSStyleDeclaration *style;

- (id)initWithSelectorText:(id)a0 styleText:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
