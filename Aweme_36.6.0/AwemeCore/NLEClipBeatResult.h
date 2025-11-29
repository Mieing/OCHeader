@class NSArray, NSDictionary;

@interface NLEClipBeatResult : NSObject

@property (readonly, copy, nonatomic) NSArray *audioAssets;
@property (readonly, copy, nonatomic) NSDictionary *audioTimeClipInfo;
@property (copy, nonatomic) NSDictionary *photoAssetsInfo;
@property (readonly, copy, nonatomic) NSArray *photoMovieAssets;
@property (readonly, copy, nonatomic) NSDictionary *assetTransformInfo;
@property (readonly, copy, nonatomic) NSDictionary *movieAnimationType;
@property (readonly, copy, nonatomic) NSDictionary *movieInputFillType;
@property (readonly, copy, nonatomic) NSDictionary *bingoVideoKeys;
@property (readonly, copy, nonatomic) NSArray *videoAssets;
@property (readonly, copy, nonatomic) NSDictionary *volumnInfo;
@property (readonly, copy, nonatomic) NSDictionary *videoTimeScaleInfo;
@property (readonly, copy, nonatomic) NSDictionary *videoTimeClipInfo;
@property (readonly, copy, nonatomic) NSDictionary *canvasInfo;
@property (readonly, copy, nonatomic) NSDictionary *canvasConfigsMap;

- (id)p_fixedAudioClipRangeWithVideoData:(id)a0 audioAsset:(id)a1;
- (id)initWithVideoData:(id)a0;
- (void).cxx_destruct;

@end
