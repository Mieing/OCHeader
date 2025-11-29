@interface TPPlayerInitParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (id)makeWithPlayerId:(long long)a0 width:(long long)a1 height:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
