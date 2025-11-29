@class NSString;

@interface AWEIMBlockOperation : AWEIMCommonOperation

@property (copy, nonatomic) id /* block */ runningBlock;
@property (copy, nonatomic) NSString *identifier;

+ (id)asyncTaskWithBlock:(id /* block */)a0;

- (id)initAsyncTaskWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finish;
- (void)run;

@end
