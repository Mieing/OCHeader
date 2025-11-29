@class NSString, IESECOrderListTabUIConfigModel;

@interface IESECOrderListTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tabID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) IESECOrderListTabUIConfigModel *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
