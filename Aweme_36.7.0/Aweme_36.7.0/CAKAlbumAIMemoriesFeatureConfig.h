@class NSString;
@protocol CAKAlbumAIMemoriesFeatureServiceProtocol;

@interface CAKAlbumAIMemoriesFeatureConfig : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) id<CAKAlbumAIMemoriesFeatureServiceProtocol> externalService;
@property (nonatomic) long long searchPageInsightItemAssetMinCnt;
@property (nonatomic) long long searchPageInsightItemMinCnt;
@property (nonatomic) long long searchPageInsightItemMaxCnt;
@property (nonatomic) long long validC1500AssetCount;
@property (nonatomic) BOOL forbidShowCollection;
@property (readonly, nonatomic) BOOL isFollowScene;
@property (nonatomic) BOOL isAIMemoriesAnchorEnter;
@property (copy, nonatomic) NSString *followTopicName;
@property (copy, nonatomic) NSString *followTopicID;
@property (copy, nonatomic) NSString *followMemoryEffectID;
@property (copy, nonatomic) NSString *storyTemplateId;
@property (copy, nonatomic) NSString *aiMemoryEditProject;
@property (nonatomic) BOOL showSearchResultWhenEnterAlbum;
@property (copy, nonatomic) NSString *showSearchResultQuery;
@property (nonatomic) long long selectAssetCountMin;
@property (nonatomic) long long selectAssetCountMax;
@property (copy, nonatomic) NSString *followMusicId;

- (void).cxx_destruct;

@end
