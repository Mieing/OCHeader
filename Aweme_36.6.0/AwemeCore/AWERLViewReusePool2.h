@class NSString, NSMutableArray;

@interface AWERLViewReusePool2 : NSObject

@property (retain, nonatomic) NSMutableArray *pool;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *key;

- (id)popViewForContainerView:(id)a0 creator:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithKey:(id)a0;

@end
