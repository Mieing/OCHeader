@interface EEUIAnnotationCompletionOC : NSObject

@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ error;

+ (id)completionWithSuccess:(id /* block */)a0 andError:(id /* block */)a1;

- (void).cxx_destruct;

@end
