@class AVAsset, NSMutableArray;
@protocol WCFinderRedPacketCropSliderModelDelegate;

@interface WCFinderRedPacketCropSliderModel : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSMutableArray *thumbImages;
@property (nonatomic) BOOL isLoadingImg;
@property (nonatomic) double videoDuration;
@property (weak, nonatomic) id<WCFinderRedPacketCropSliderModelDelegate> delegate;

+ (double)shareTimeSecondsInterval;

- (id)initWithAsset:(id)a0;
- (void)loadAssetByShareSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (long long)numnerOfItems;
- (void).cxx_destruct;

@end
