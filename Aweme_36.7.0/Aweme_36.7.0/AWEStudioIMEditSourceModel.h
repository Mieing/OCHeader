@class AVAsset, NSString, UIImage, PHAsset;

@interface AWEStudioIMEditSourceModel : NSObject

@property (nonatomic) long long sourceType;
@property (retain, nonatomic) PHAsset *sourcePhAsset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *livePhotoPairedVideoUrl;
@property (copy, nonatomic) NSString *livePhotoPairedImageUrl;

- (void).cxx_destruct;

@end
