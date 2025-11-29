@class NSNumber;

@interface BSPOIInfo : NSObject

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

+ (id)makeWithLatitude:(id)a0 longitude:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
