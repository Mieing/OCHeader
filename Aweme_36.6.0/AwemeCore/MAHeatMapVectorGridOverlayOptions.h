@class NSArray;

@interface MAHeatMapVectorGridOverlayOptions : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL visible;
@property (copy, nonatomic) NSArray *inputGrids;
@property (nonatomic) double minZoom;
@property (nonatomic) double maxZoom;

- (void).cxx_destruct;
- (id)init;

@end
