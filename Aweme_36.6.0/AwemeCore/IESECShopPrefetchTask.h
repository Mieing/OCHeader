@interface IESECShopPrefetchTask : NSObject

@property (nonatomic) BOOL inPrefetch;
@property (retain, nonatomic) id prefetchData;
@property (copy, nonatomic) id /* block */ prefetchCallback;

- (void).cxx_destruct;

@end
