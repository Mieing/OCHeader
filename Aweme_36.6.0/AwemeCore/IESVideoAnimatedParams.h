@class NSString;

@interface IESVideoAnimatedParams : NSObject

@property (copy, nonatomic) NSString *canvasKey;
@property (nonatomic) unsigned int videoTextureID;
@property (nonatomic) void *rlVideoTexture;
@property (nonatomic) unsigned int backgroundTextureID;
@property (nonatomic) void *rlBackgroundTexture;
@property (nonatomic) struct CGSize { double width; double height; } videoTextureSize;
@property (nonatomic) struct CGSize { double width; double height; } backgroundTextureSize;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (nonatomic) double angle;
@property (nonatomic) double scale;
@property (nonatomic) double fitCanvasScale;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) double time;
@property (nonatomic) double alpha;

- (void).cxx_destruct;
- (id)init;

@end
