@class NSNumber, NSString;

@interface BizPOIInfo : NSObject

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *cityCode;

+ (id)makeWithLatitude:(id)a0 longitude:(id)a1 cityCode:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
