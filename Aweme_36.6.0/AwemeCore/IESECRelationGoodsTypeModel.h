@class NSString;

@interface IESECRelationGoodsTypeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long goodsType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long goodsNum;
@property (nonatomic) BOOL isCurrentTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
