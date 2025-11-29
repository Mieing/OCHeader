@interface TPPlayerSetMuteParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) BOOL mute;

+ (id)makeWithPlayerId:(long long)a0 mute:(BOOL)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
