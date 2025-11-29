@class NSString, NSMutableSet;

@interface IESLiveStrategyCharacterIndexingItem : NSObject

@property (retain, nonatomic) NSMutableSet *factorNames;
@property (retain) id preValue;
@property (readonly, nonatomic) NSString *characterName;
@property (readonly, nonatomic) double checkInterval;
@property (readonly) double lastUpdateTime;

- (void)addFactorNames:(id)a0;
- (BOOL)updateValue:(id)a0 ts:(double)a1;
- (void).cxx_destruct;
- (id)initWithCharacter:(id)a0;

@end
