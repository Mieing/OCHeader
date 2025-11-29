@class NSMutableArray;

@interface IESLiveShortTouchActionQueue : NSObject

@property (retain, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) id /* block */ trigger;
@property (nonatomic) BOOL isExecuting;

- (void)endQueue;
- (void).cxx_destruct;
- (void)addAction:(id /* block */)a0;
- (id)init;
- (void)triggerAction;

@end
