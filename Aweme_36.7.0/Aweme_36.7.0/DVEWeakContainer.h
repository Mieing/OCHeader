@interface DVEWeakContainer : NSObject

@property (readonly, weak, nonatomic) id weakObject;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
