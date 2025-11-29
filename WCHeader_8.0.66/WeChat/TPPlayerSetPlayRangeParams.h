@interface TPPlayerSetPlayRangeParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long endTimeMs;

+ (id)makeWithPlayerId:(long long)a0 startTimeMs:(long long)a1 endTimeMs:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
