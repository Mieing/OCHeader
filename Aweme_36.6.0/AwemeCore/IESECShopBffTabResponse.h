@class NSDictionary, IESECShopTKBFFModel;

@interface IESECShopBffTabResponse : IESECBaseApiModel

@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *perfLogExtra;
@property (retain, nonatomic) IESECShopTKBFFModel *tabKitModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
