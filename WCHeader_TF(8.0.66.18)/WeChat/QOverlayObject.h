@class NSString;

@interface QOverlayObject : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } clickedPosition;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;

@end
