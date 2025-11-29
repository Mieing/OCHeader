@interface QPolylineViewPasspointPayload : NSObject

@property (nonatomic) int index;
@property (nonatomic) struct { double x; double y; } coordinate;
@property (nonatomic) BOOL clearColor;

@end
