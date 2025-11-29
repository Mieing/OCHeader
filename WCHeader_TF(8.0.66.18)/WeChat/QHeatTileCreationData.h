@class NSArray, QQuadTree;

@interface QHeatTileCreationData : NSObject {
    struct { double minX; double minY; double maxX; double maxY; } _bounds;
    unsigned long long _decayRadius;
    unsigned long long _minimumZoomIntensity;
    unsigned long long _maximumZoomIntensity;
    NSArray *_colorMap;
    NSArray *_maxIntensities;
    NSArray *_kernel;
    QQuadTree *_quadTree;
}

- (void).cxx_destruct;

@end
