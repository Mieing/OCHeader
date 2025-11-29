@interface TPPlayerSeekParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long timeMs;
@property (nonatomic) BOOL isManualSeek;

+ (id)makeWithPlayerId:(long long)a0 timeMs:(long long)a1 isManualSeek:(BOOL)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
