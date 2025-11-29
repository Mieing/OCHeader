@class AWETeenGeneralIPAlbumCardModel, AWETeenGeneralWikiCardModel, NSString, AWETeenGeneralResourceGroupModel, AWETeenGeneralVideoCardModel, AWETeenGeneralAlbumCardModel, AWETeenGeneralAuthorListCardModel, AWETeenGeneralAuthorVideoCardModel;

@interface AWETeenGeneralCardModel : AWEBaseApiModel <IGListDiffable>

@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWETeenGeneralVideoCardModel *videoModel;
@property (retain, nonatomic) AWETeenGeneralAlbumCardModel *albumModel;
@property (retain, nonatomic) AWETeenGeneralAuthorListCardModel *authorListModel;
@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *authorVideoModel;
@property (retain, nonatomic) AWETeenGeneralWikiCardModel *wikiModel;
@property (retain, nonatomic) AWETeenGeneralResourceGroupModel *guideCardModel;
@property (retain, nonatomic) AWETeenGeneralIPAlbumCardModel *ipAlbumCardModel;
@property (copy, nonatomic) NSString *searchAttachInfo;

+ (id)videoModelJSONTransformer;
+ (id)albumModelJSONTransformer;
+ (id)wikiModelJSONTransformer;
+ (id)guideCardModelCardJSONTransformer;
+ (id)authorListModelJSONTransformer;
+ (id)authorVideoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
