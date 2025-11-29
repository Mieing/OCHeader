@class NSArray, NSString, ILAAsset, PHAsset, NSDictionary, ILAAssetLocation;

@interface AWEStudioAIMemorieAssetFeature : NSObject

@property (retain, nonatomic) ILAAsset *asset;
@property (retain, nonatomic) ILAAssetLocation *location;
@property (retain, nonatomic) PHAsset *phAsset;
@property (copy, nonatomic) NSArray *scanResultArray;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSArray *embeddingStorageModelArray;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSString *albums;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *p_assetID;
@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, nonatomic) BOOL hasLocaitonInfo;

- (id)faceDict;
- (id)initWithAssetID:(id)a0 location:(id)a1;
- (id)dataJSONDictWithIndexIndicator:(id)a0;
- (id)lceDictWithIndexIndicator:(id)a0;
- (id)similarFeatureDictWithIndexIndicator:(id)a0;
- (id)faceDictWithIndexIndicator:(id)a0;
- (id)clipDictWithIndexIndicator:(id)a0;
- (id)initWithAsset:(id)a0 phAsset:(id)a1 albums:(id)a2 scene:(id)a3 location:(id)a4 scanResultArray:(id)a5 outerDuration:(double)a6 embeddingDataModel:(id)a7 embDataVersion:(id)a8 extraInfo:(id)a9;
- (id)dataJSONDict;
- (id)lceDict;
- (id)similarFeatureDict;
- (id)clipDict;
- (id)locationDataDictWithIndexIndicator:(id)a0;
- (void).cxx_destruct;

@end
