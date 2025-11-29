@class NSString;

@interface QPoiInfoV2 : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 name:(id)a1;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
