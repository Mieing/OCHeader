@class OMJSpatialInfo;

@interface OMJOverlayDesc : NSObject

@property (retain, nonatomic) OMJSpatialInfo *spatialInfo;
@property (nonatomic) int zIndex;

- (id)initWithSpatialInfo:(id)a0;
- (id)initWithSpatialInfo:(id)a0 zIndex:(int)a1;
- (id)description;
- (void).cxx_destruct;

@end
