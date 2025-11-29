@class IESECTextElement, IESECLongContentLabelElement;

@interface IESECGoodsDetailCarAddressDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECLongContentLabelElement *title;
@property (retain, nonatomic) IESECTextElement *addressTextElement;
@property (retain, nonatomic) IESECTextElement *distanceTextElement;
@property (retain, nonatomic) IESECTextElement *detailTextElement;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
