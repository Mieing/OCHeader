@class NSArray, FlutterStandardTypedData;

@interface POIStreamUpdateData : NSObject

@property (copy, nonatomic) NSArray *finderObjectPBDataArray;
@property (retain, nonatomic) FlutterStandardTypedData *nearbyInfoPBData;
@property (nonatomic) BOOL containsNearby;
@property (nonatomic) BOOL isReload;
@property (nonatomic) long long prefetchCount;

+ (id)makeWithFinderObjectPBDataArray:(id)a0 nearbyInfoPBData:(id)a1 containsNearby:(BOOL)a2 isReload:(BOOL)a3 prefetchCount:(long long)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
