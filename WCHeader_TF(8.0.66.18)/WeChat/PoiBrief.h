@class NSString, PoiGps, PoiPoint, NSMutableArray;

@interface PoiBrief : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PoiGps *marsGps;
@property (retain, nonatomic) PoiPoint *marsPoint;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *categories;
@property (retain, nonatomic) NSMutableArray *categoriesList;
@property (nonatomic) float distance;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *fullAddress;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSMutableArray *aliases;
@property (nonatomic) int adcode;

+ (void)initialize;

@end
