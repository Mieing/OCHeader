@class NSDictionary;

@interface IESECOrderTask : NSObject

@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL await;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSDictionary *data;

- (void)complete;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (BOOL)isPending;
- (void)runWithCompletion:(id /* block */)a0;
- (void)cancel;

@end
