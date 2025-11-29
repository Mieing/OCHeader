@class NSString;

@interface IESECWinGoodsListSearchRenderItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) long long customOrder;
@property (copy, nonatomic) NSString *dataId;
@property (nonatomic) BOOL isDefaultSelect;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
