@class NSString, NSMutableArray;

@interface IESLiveLinkDependencyObject : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSMutableArray *callbackArray;
@property (nonatomic) BOOL finished;

- (void)addSubscribeCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finish;

@end
