@interface TPPlayerSetLoopParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) BOOL loop;

+ (id)makeWithPlayerId:(long long)a0 loop:(BOOL)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
