@interface AWECommerceTask : NSObject

@property (copy, nonatomic) id /* block */ taskRunner;
@property (nonatomic) unsigned long long taskTypeMask;

- (void).cxx_destruct;

@end
