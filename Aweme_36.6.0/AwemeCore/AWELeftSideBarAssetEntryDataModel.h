@class NSString, AWELeftSideBarIconUrlArrayDataModel;

@interface AWELeftSideBarAssetEntryDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entryId;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long detailType;
@property (copy, nonatomic) NSString *detailInfo;
@property (retain, nonatomic) AWELeftSideBarIconUrlArrayDataModel *detailIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
