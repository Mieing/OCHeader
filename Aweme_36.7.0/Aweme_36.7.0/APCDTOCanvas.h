@class APCDTOPoint, NSString, NSArray, UIImage, NSURL, APCDTOGestureSupport, APCDTOCanvasBackground;

@interface APCDTOCanvas : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) NSURL *localVideoURL;
@property (nonatomic) long long canvasType;
@property (nonatomic) long long iesMMCanvasType;
@property (copy, nonatomic) NSString *canvasImagePath;
@property (copy, nonatomic) NSArray *segments;
@property (retain, nonatomic) APCDTOCanvasBackground *background;
@property (nonatomic) double duration;
@property (retain, nonatomic) APCDTOGestureSupport *gestureSupport;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderSize;
@property (copy, nonatomic) NSString *group;
@property (retain, nonatomic) APCDTOPoint *location;
@property (copy, nonatomic) NSString *remoteVideoScene;
@property (copy, nonatomic) NSArray *remoteVideoResourceId;
@property (nonatomic) double subtitleOffsetY;
@property (nonatomic) BOOL isDurationChangeWithMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentsJSONTransformer;
+ (id)backgroundJSONTransformer;
+ (id)locationJSONTransformer;
+ (id)gestureSupportJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
