@class IESECLiveGoodsPurchaseStepper, NSString, IESECLiveGoodsPurchaseAddCart, IESECLiveGoodsPurchaseButton;

@interface IESECLiveGoodsPurchaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsPurchaseButton *button;
@property (retain, nonatomic) IESECLiveGoodsPurchaseAddCart *addCart;
@property (retain, nonatomic) IESECLiveGoodsPurchaseStepper *stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
