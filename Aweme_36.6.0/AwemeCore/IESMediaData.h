@class AVAsset, NSURL, NSString;

@interface IESMediaData : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSURL *picPath;
@property (retain, nonatomic) NSURL *originalPicPath;
@property (nonatomic) long long type;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) float overlap;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (nonatomic) float rate;
@property (nonatomic) long long layer;
@property (retain, nonatomic) NSString *assetSegmentID;
@property (nonatomic) unsigned long long outputRotationMode;
@property (nonatomic) unsigned long long resourceRotationMode;
@property (retain, nonatomic) NSString *resourceID;
@property (nonatomic) float maskAlpha;
@property (nonatomic) long long scaleMode;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
