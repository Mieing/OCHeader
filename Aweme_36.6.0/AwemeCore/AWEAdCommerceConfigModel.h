@class AWEAdItemCommentEggGroup, NSString, AWEAdItemLikeEggModel, AWEAdItemLokiLikeEggModel, AWEAdItemContentLikeEggModel, AWEAdCommerceNakedEye3DModel, AWEURLModel;

@interface AWEAdCommerceConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *data;
@property (nonatomic) BOOL contentEggInvalid;
@property (retain, nonatomic) AWEAdItemLikeEggModel *itemLikeEggData;
@property (retain, nonatomic) AWEAdItemCommentEggGroup *itemCommentEggGroup;
@property (retain, nonatomic) AWEAdItemContentLikeEggModel *contentLikeEgg;
@property (retain, nonatomic) AWEAdItemLokiLikeEggModel *lokiLikeEgg;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *vibrationMaterialURLList;
@property (retain, nonatomic) AWEAdCommerceNakedEye3DModel *nakedEye3D;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONTransformer;
+ (id)itemCommentEggJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)itemCommentEggGroup;
- (void).cxx_destruct;

@end
