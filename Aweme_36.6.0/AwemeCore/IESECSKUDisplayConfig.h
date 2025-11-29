@interface IESECSKUDisplayConfig : IESECBaseApiModel

@property (nonatomic) BOOL showPriceComponent;
@property (nonatomic) BOOL showDiscountComponent;
@property (nonatomic) BOOL showDetailEntranceComponent;
@property (nonatomic) BOOL showStepperComponent;
@property (nonatomic) BOOL showDouInstallment;

+ (id)JSONKeyPathsByPropertyKey;

@end
