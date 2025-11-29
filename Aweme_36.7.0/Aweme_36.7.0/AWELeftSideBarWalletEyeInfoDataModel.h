@class NSString, AWELeftSideBarIconUrlArrayDataModel;

@interface AWELeftSideBarWalletEyeInfoDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (retain, nonatomic) AWELeftSideBarIconUrlArrayDataModel *openIcon;
@property (retain, nonatomic) AWELeftSideBarIconUrlArrayDataModel *closeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openIconJSONTransformer;
+ (id)closeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
