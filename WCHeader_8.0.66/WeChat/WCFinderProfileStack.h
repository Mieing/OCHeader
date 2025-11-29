@class NSMutableDictionary;

@interface WCFinderProfileStack : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemMap;

+ (id)shared;

- (id)init;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)checkStackProfileForKey:(id)a0;
- (void).cxx_destruct;

@end
