@class NSString, AVAsset, NSURL;

@interface LVMediaAsset : NSObject

@property (copy, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) AVAsset *avAsset;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } clipRange;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) BOOL isReversed;
@property (copy, nonatomic) NSURL *originImageFileURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) long long nominalFrameRate;
@property (readonly, copy, nonatomic) NSString *mediaDescription;
@property (readonly, nonatomic) unsigned long long estimatedFrames;

- (BOOL)isAssetEqualTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)videoTrack;

@end
