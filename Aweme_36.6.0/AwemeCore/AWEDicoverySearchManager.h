@class NSNumber, NSDictionary;

@interface AWEDicoverySearchManager : NSObject

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)searchUserWithKeyword:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)searchUserWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
