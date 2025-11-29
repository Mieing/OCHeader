@class NSString, IESECShopTagScrollConfig, IESECShopTagListModel;

@interface IESECShopScrollTagsComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopTagListModel *tagListModel;
@property (retain, nonatomic) IESECShopTagScrollConfig *scrollConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
