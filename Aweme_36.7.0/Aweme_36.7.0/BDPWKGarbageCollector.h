@class NSMutableDictionary;

@interface BDPWKGarbageCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *poolDict;

+ (id)sharedManager;

- (BOOL)triggerGCWithTechType:(long long)a0;
- (id)processPoolWithTechType:(long long)a0;
- (void).cxx_destruct;

@end
