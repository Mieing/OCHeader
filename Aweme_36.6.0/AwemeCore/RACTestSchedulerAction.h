@class RACDisposable, NSDate;

@interface RACTestSchedulerAction : NSObject

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) RACDisposable *disposable;

- (id)initWithDate:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;

@end
