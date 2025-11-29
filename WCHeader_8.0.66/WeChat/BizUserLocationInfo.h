@class NSNumber, NSString;

@interface BizUserLocationInfo : NSObject

@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSString *adcode;
@property (retain, nonatomic) NSNumber *openK1kLocation;
@property (retain, nonatomic) NSNumber *openSystemLocation;

+ (id)makeWithLongitude:(id)a0 latitude:(id)a1 adcode:(id)a2 openK1kLocation:(id)a3 openSystemLocation:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
