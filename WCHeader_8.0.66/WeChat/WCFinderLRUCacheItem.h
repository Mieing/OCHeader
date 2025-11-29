@interface WCFinderLRUCacheItem : NSObject

@property (retain, nonatomic) id data;
@property (nonatomic) unsigned long long cost;

- (id)initWithData:(id)a0 cost:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
