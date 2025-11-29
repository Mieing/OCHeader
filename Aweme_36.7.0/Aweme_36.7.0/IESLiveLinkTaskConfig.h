@class NSMutableArray;

@interface IESLiveLinkTaskConfig : NSObject

@property (retain, nonatomic) NSMutableArray *taskList;
@property (readonly) id /* block */ addTask;

- (void).cxx_destruct;
- (id)init;
- (id)tasks;

@end
