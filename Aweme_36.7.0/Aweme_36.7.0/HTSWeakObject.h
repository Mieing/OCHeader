@interface HTSWeakObject : NSObject

@property (weak, nonatomic) id object;

- (void).cxx_destruct;

@end
