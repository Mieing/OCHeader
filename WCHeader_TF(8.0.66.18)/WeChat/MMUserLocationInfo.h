@interface MMUserLocationInfo : NSObject

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;

+ (id)makeWithLongitude:(double)a0 latitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
