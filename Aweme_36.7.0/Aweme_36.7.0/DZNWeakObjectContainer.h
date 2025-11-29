@interface DZNWeakObjectContainer : NSObject

@property (readonly, weak, nonatomic) id weakObject;

- (void).cxx_destruct;
- (id)initWithWeakObject:(id)a0;

@end
