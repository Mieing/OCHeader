@class NSString;

@interface WAPOIInfo : NSObject <NSCoding>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *bid;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *infoUrl;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
