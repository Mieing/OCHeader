@interface TPPlayerScaleTypeParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long scaleType;

+ (id)makeWithPlayerId:(long long)a0 scaleType:(long long)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
