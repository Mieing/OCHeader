@class NSMutableDictionary;

@interface AWERLGlobalMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;

+ (id)shareInstance;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
