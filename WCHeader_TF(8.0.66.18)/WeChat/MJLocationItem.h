@class NSString;

@interface MJLocationItem : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *nation;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *street;

- (void).cxx_destruct;

@end
