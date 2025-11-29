@class NSString;

@interface BDPLocationPlaceModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *pname;
@property (retain, nonatomic) NSString *cityname;
@property (retain, nonatomic) NSString *adname;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } loc;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
