@class NSMutableArray, JsWorkerIOS;

@interface IESECEZTFJSTaskGroup : NSObject

@property (retain, nonatomic) NSMutableArray *taskList;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) JsWorkerIOS *jsWorker;

- (id)initWithTaskList:(id)a0;
- (void)loadJS;
- (void).cxx_destruct;

@end
