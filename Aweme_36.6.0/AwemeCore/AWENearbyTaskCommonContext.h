@class NSMutableDictionary;

@interface AWENearbyTaskCommonContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *context;

- (id)contextDict;
- (void)addActionForKey:(id)a0 value:(id /* block */)a1;
- (void).cxx_destruct;
- (id)getObjectForKey:(id)a0;

@end
