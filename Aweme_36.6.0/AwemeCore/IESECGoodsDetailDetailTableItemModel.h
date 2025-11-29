@class IESECTextElement, IESECTextWithIconElement, NSDictionary;

@interface IESECGoodsDetailDetailTableItemModel : IESECBaseApiModel

@property (retain, nonatomic) IESECTextElement *header;
@property (retain, nonatomic) IESECTextWithIconElement *mainElement;
@property (retain, nonatomic) IESECTextWithIconElement *qualificationPreElement;
@property (retain, nonatomic) IESECTextElement *qualificationTailElement;
@property (nonatomic) BOOL certificationNewDesign;
@property (copy, nonatomic) NSDictionary *authInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
