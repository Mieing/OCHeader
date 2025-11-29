@class IESECSKUTaskContext, NSMutableDictionary, NSString;

@interface IESECSKUTaskManager : NSObject <IESECSKUTaskChain>

@property (retain, nonatomic) IESECSKUTaskContext *taskContext;
@property (retain, nonatomic) NSMutableDictionary *taskModelMapping;
@property (readonly, copy, nonatomic) id /* block */ runTask;
@property (readonly, copy, nonatomic) id /* block */ runTaskWithCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerTaskModel;
- (id)taskKeyFromActionType:(long long)a0 isMultiSKU:(BOOL)a1;
- (id)newTaskFromClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithTaskContext:(id)a0;
- (id)run;

@end
