@interface BDXPoolConfig : NSObject

@property (copy, nonatomic) id /* block */ customIdentifierBlock;
@property (nonatomic) unsigned long long maxCacheCount;
@property (nonatomic) BOOL clearOnMemoryWarning;

- (void).cxx_destruct;
- (id)init;

@end
