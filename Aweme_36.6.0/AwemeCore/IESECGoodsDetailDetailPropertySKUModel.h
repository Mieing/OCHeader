@class NSArray, IESECTextWithIconElement, IESECMediaBoxElement;

@interface IESECGoodsDetailDetailPropertySKUModel : IESECBaseApiModel

@property (retain, nonatomic) IESECMediaBoxElement *cover;
@property (retain, nonatomic) IESECTextWithIconElement *content;
@property (copy, nonatomic) NSArray *subProducts;

- (BOOL)useSimpleTextCell;
- (void).cxx_destruct;

@end
