@class IESECSKUTaskContext;

@interface IESECSKUBaseTask : NSObject

@property (retain, nonatomic) IESECSKUTaskContext *context;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)runTask;

@end
