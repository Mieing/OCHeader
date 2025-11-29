@class NSString, IESECOrderListTabIndicatorUIConfigModel, IESECOrderListTabItemUIConfigModel;

@interface IESECOrderListTabUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double paddingLeft;
@property (retain, nonatomic) IESECOrderListTabItemUIConfigModel *normalButton;
@property (retain, nonatomic) IESECOrderListTabItemUIConfigModel *selectedButton;
@property (retain, nonatomic) IESECOrderListTabItemUIConfigModel *badge;
@property (retain, nonatomic) IESECOrderListTabIndicatorUIConfigModel *indicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
