@class NSString, NSDictionary, IESECShopMemberCardModel;

@interface IESECShopMemberData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) IESECShopMemberCardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
