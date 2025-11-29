@class NSMutableArray, NSMutableDictionary;

@interface PuzzleBridgeEngineContext : NSObject

@property (retain, nonatomic) NSMutableArray *globalMethods;
@property (retain, nonatomic) NSMutableDictionary *cachedDict;

+ (id)sharedInstance;

- (id)bridgeMethodWithName:(id)a0;
- (BOOL)isExistMethodWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
