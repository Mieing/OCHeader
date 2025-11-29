@class NSMutableDictionary, NSArray, ACCEditViewControllerInputData, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCAdvanceEditAssetHandlerDelegate;

@interface ACCAdvanceEditAssetsHandler : NSObject

@property (retain, nonatomic) NSMutableArray *addedAssetArray;
@property (retain, nonatomic) NSMutableDictionary *sourceAssetDic;
@property (retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *sourceAssetArray;
@property (retain, nonatomic) NSMutableDictionary *sourcePHAsset;
@property (nonatomic) BOOL isSourceAssetArrayDirty;
@property (weak, nonatomic) id<ACCAdvanceEditAssetHandlerDelegate> delegate;

- (id)timeStringWithDuration:(double)a0;
- (id)nle;
- (void)resetClipInfoForAssetArray:(id)a0 withVideoData:(id)a1 isBrandNewAiData:(BOOL)a2;
- (id)findAssetModelIn:(id)a0 AVAsset:(id)a1;
- (id)findAVAssetInVideoData:(id)a0 withAssetModel:(id)a1;
- (id)findOrGenerateAssetModelWithOriginAssetModelArray:(id)a0 withSlot:(id)a1 withVideoData:(id)a2 isGenerated:(BOOL *)a3;
- (id)generateNewForAssetArray:(id)a0 withVideoData:(id)a1 isBrandNewAiData:(BOOL)a2;
- (id)assetModelWithAsset:(id)a0;
- (void)p_resetMediaTypeAssetArray:(id)a0;
- (BOOL)isRecordVideo;
- (BOOL)isEqualURLFromAsset:(id)a0 toAsset:(id)a1;
- (id)avAssetsFromPath:(id)a0;
- (void)prepareVideoDataForClipWithAssetArray:(id)a0 withVideoData:(id)a1;
- (void)syncAssetArrayWithVideoData:(id)a0 isBrandNewAiData:(BOOL)a1;
- (id)findOrGenerateAssetsWithOriginAssetsArray:(id)a0 withVideoData:(id)a1;
- (void)updateAVAssetForSourceAssetArray:(id)a0 videoData:(id)a1;
- (BOOL)needRebuildPublishSelectedAssetModelsWithVideoData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
