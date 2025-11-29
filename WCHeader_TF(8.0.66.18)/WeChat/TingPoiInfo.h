@class NSNumber;

@interface TingPoiInfo : NSObject

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *precision;
@property (retain, nonatomic) NSNumber *adCode;

+ (id)makeWithLatitude:(id)a0 longitude:(id)a1 precision:(id)a2 adCode:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
