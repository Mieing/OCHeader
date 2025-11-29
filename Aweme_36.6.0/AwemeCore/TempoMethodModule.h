@class NSString, NSMutableDictionary, NSDictionary;

@interface TempoMethodModule : NSObject

@property (retain, nonatomic) NSMutableDictionary *methodDict;
@property (retain, nonatomic) NSMutableDictionary *globalMethodMutableDict;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *globalMethodDict;

+ (void)wrongArgsErrorWithArgs:(id)a0 description:(id)a1 error:(id *)a2;

- (void)registerMethodImp:(id)a0 impl:(id /* block */)a1 options:(unsigned long long)a2;
- (void)registerMethodImp:(id)a0 impl:(id /* block */)a1;
- (id)globalMethodDict;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (id)valueForKey:(id)a0;
- (void)loadModule;

@end
