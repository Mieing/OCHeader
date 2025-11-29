@class NSDictionary;

@interface TPPlayerRenderEffect : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long effectId;
@property (nonatomic) long long effectType;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long endTimeMs;
@property (copy, nonatomic) NSDictionary *params;

+ (id)makeWithPlayerId:(long long)a0 effectId:(long long)a1 effectType:(long long)a2 startTimeMs:(long long)a3 endTimeMs:(long long)a4 params:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
