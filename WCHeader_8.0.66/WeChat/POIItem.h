@class NSString;

@interface POIItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *addrForShow;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *addr;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *typeId;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *nation;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *subAddr;
@property (nonatomic) float distance;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;

+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (BOOL)isIndoor;

@end
