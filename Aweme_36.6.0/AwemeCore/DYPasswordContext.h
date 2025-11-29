@class NSString;

@interface DYPasswordContext : NSObject

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ didFinishBlock;
@property (copy, nonatomic) id /* block */ didCancelBlock;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
