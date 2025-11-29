@class AVURLAsset;

@interface ACCSecurityExportModel : NSObject

@property (retain, nonatomic) AVURLAsset *asset;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (nonatomic) double timeInterval;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;

@end
