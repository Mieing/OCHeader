@class IESECShopToolsEntryModel, NSString;

@interface IESECShopToolsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopToolsEntryModel *serviceEntryInfo;
@property (retain, nonatomic) IESECShopToolsEntryModel *shareEntryInfo;
@property (retain, nonatomic) IESECShopToolsEntryModel *couponRedPackEntryInfo;
@property (retain, nonatomic) IESECShopToolsEntryModel *cartEntryInfo;
@property (retain, nonatomic) IESECShopToolsEntryModel *orderEntryInfo;
@property (retain, nonatomic) IESECShopToolsEntryModel *memberEntryInfo;
@property (copy, nonatomic) NSString *lynxSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
