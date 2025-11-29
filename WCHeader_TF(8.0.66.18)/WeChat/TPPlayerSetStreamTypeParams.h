@interface TPPlayerSetStreamTypeParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long streamType;

+ (id)makeWithPlayerId:(long long)a0 streamType:(long long)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
