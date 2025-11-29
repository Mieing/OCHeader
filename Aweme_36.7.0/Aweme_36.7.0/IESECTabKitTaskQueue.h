@class NSString, NSMutableArray;

@interface IESECTabKitTaskQueue : NSObject

@property (copy, nonatomic) NSString *flag;
@property (nonatomic) BOOL didInvoke;
@property (retain, nonatomic) NSMutableArray *tasks;

- (void)invokeTask;
- (void)addTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFlag:(id)a0;

@end
