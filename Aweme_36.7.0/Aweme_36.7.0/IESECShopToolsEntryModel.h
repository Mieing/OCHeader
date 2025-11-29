@class NSString, IESECURLModel, NSArray;

@interface IESECShopToolsEntryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *entryIcon;
@property (copy, nonatomic) NSString *entryText;
@property (copy, nonatomic) NSString *entrySchema;
@property (copy, nonatomic) NSString *entryName;
@property (copy, nonatomic) NSArray *couponInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
