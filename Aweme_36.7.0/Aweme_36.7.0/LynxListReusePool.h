@class NSMutableDictionary;

@interface LynxListReusePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) NSMutableDictionary *reuseIdentifierMap;

- (void)enqueueReusableCell:(id)a0;
- (id)dequeueReusableCellInIndex:(long long)a0 withReuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)registerClass:(Class)a0 forCellReuseIdentifier:(id)a1;

@end
