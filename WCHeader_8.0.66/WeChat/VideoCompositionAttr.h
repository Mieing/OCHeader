@class NSString, NSMutableDictionary, UIImage, CALayer, AVMutableVideoComposition;

@interface VideoCompositionAttr : MMObject <NSCoding>

@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) CALayer *overlayLayer;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } cropTimeRange;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long subEntranceType;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *videoBGMPath;
@property (nonatomic) BOOL hasOriginSound;
@property (nonatomic) BOOL isPhotoCompositionVideo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (nonatomic) BOOL forbidsSoftEncoding;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (nonatomic) BOOL useAssetDurationForCompose;
@property (nonatomic) BOOL isVideoEdited;
@property (nonatomic) BOOL canCompositeSameVideo;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) double currentVideoEncodeProgress;
@property (readonly, nonatomic) NSMutableDictionary *extraInfo;

+ (id)createFromEditVideoAttr:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
