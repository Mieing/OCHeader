@class NSString;

@interface IESPreloadRequest : NSObject

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ didStartBlock;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *group;

- (id)initWithBlock:(id)a0 group:(id)a1 progressBlock:(id /* block */)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 didStartBlock:(id /* block */)a6;
- (void)callback:(long long)a0 info:(id)a1;
- (void).cxx_destruct;

@end
