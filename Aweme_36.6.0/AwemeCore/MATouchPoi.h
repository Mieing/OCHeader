@class NSString;

@interface MATouchPoi : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *uid;

+ (id)poiWithName:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 uid:(id)a2;

- (id)initWithName:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 uid:(id)a2;
- (void).cxx_destruct;

@end
