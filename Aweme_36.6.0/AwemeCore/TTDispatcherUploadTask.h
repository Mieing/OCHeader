@class NSString, NSMutableArray, TTUploadTaskParam;

@interface TTDispatcherUploadTask : NSObject

@property (retain) NSMutableArray *sameTaskResultBlockArray;
@property (copy) NSString *urlKey;
@property BOOL isDeleted;
@property (retain) TTUploadTaskParam *userParameters;
@property (copy) id /* block */ onRealTask;
@property (copy) id /* block */ onRealQueryTask;
@property (copy) id /* block */ resultBlock;

- (void)executeAllResultBlock:(id)a0;
- (void)addResultBlock:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
