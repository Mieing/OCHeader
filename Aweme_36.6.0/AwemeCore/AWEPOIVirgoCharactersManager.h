@class NSMutableDictionary, AWEPOIClientSmartService;
@protocol AWELiveStrategyServiceAdapter;

@interface AWEPOIVirgoCharactersManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *customCharacters;
@property (retain, nonatomic) id<AWELiveStrategyServiceAdapter> smartStrategyService;
@property (retain, nonatomic) AWEPOIClientSmartService *clientSmartService;

- (id)characterValueForKey:(id)a0;
- (id)characterValueForKey:(id)a0 sourceType:(unsigned long long)a1;
- (void)updateCharacters:(id)a0 sourceType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
