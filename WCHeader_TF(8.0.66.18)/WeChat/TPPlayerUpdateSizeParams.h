@interface TPPlayerUpdateSizeParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long x;
@property (nonatomic) long long y;

+ (id)makeWithPlayerId:(long long)a0 width:(long long)a1 height:(long long)a2 x:(long long)a3 y:(long long)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
