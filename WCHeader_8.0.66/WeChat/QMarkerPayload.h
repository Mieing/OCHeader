@class NSString;

@interface QMarkerPayload : NSObject

@property (nonatomic) int priority;
@property (nonatomic) int minScaleLevel;
@property (nonatomic) int maxScaleLevel;
@property (nonatomic) BOOL forceLoad;
@property (nonatomic) BOOL visibility;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL interactive;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) struct { double x; double y; } coordinate;
@property (nonatomic) int geotype;
@property (nonatomic) int iconType;
@property (nonatomic) BOOL avoidAnnotation;
@property (nonatomic) BOOL avoidOtherAnnotations;
@property (nonatomic) double angle;
@property (nonatomic) struct CGPoint { double x; double y; } scale;

- (id)init;
- (void).cxx_destruct;

@end
