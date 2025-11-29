@interface IESLiveEffectPanelIndexInfo : NSObject

@property (nonatomic) long long firstLevelIndex;
@property (nonatomic) long long secondLevelIndex;
@property (nonatomic) long long thirdLevelIndex;

- (id)initWithFirstLevelIndex:(long long)a0 secondLevelIndex:(long long)a1 thirdLevelIndex:(long long)a2;

@end
