@interface DitoRunLoopTask : NSObject

@property (copy, nonatomic) id /* block */ taskBlock;

- (void).cxx_destruct;

@end
