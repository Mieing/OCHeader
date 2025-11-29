@class NSString, NSArray, UIImage, CAKAlbumCollectionStatisticsInfoModel, PHFetchResult, PHAsset;

@interface CAKAIMemoriesSearchInsightItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *assetIDArray;
@property (copy, nonatomic) NSString *coverAssetID;
@property (retain, nonatomic) CAKAlbumCollectionStatisticsInfoModel *statisticsInfoModel;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) PHAsset *coverAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithCollectionModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void)loadCoverImageIfNeeded;
- (void).cxx_destruct;

@end
