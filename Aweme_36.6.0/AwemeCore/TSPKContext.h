@class NSMutableDictionary;

@interface TSPKContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;

- (void)setContextBlock:(id /* block */)a0 forApiType:(id)a1;
- (id)contextSymbolsForApiType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
