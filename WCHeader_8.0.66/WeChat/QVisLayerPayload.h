@class NSString;

@interface QVisLayerPayload : NSObject

@property (copy, nonatomic) NSString *layerID;
@property (copy, nonatomic) NSString *originalLayerId;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double opacity;
@property (nonatomic) int minZoomLevel;
@property (nonatomic) int maxZoomLevel;
@property (nonatomic) long long displayLevel;
@property (nonatomic) int zIndex;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) BOOL enable3D;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
