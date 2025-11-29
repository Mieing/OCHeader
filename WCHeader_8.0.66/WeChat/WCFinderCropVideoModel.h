@class AVAsset, MMAssetInfo, NSURL;

@interface WCFinderCropVideoModel : NSObject

@property (retain, nonatomic) AVAsset *avAsset;
@property (nonatomic) struct CGSize { double width; double height; } playerPreviewSize;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (retain, nonatomic) NSURL *playerURL;
@property (nonatomic) struct CGPoint { double x; double y; } videoContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } cropViewSize;

- (void).cxx_destruct;

@end
