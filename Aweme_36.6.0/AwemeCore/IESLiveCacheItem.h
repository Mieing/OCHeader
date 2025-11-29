@class NSString;

@interface IESLiveCacheItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (copy, nonatomic) id /* block */ cleanBlock;

+ (id)itemWithIdentifier:(id)a0 reportBlock:(id /* block */)a1 cleanBlock:(id /* block */)a2;

- (void).cxx_destruct;

@end
