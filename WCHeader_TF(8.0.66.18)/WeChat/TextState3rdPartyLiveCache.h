@class NSMutableDictionary;

@interface TextState3rdPartyLiveCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;

@end
