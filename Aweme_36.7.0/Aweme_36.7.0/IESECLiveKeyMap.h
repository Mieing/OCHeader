@class NSString, NSMutableDictionary, NSDictionary;

@interface IESECLiveKeyMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *innerMap;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSDictionary *map;

- (id)objectArrayWithKey:(id)a0;
- (id)objectsWithKey:(id)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0;
- (id)init;
- (void)addObjects:(id)a0;
- (id)objectWithKey:(id)a0;

@end
