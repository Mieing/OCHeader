@class NSString, NSMutableArray, DownloadGlobalParameters;

@interface TTDispatcherTask : NSObject

@property (retain) NSMutableArray *sameTaskResultBlockArray;
@property (copy) NSString *urlKey;
@property BOOL isDeleted;
@property (retain) DownloadGlobalParameters *userParameters;
@property (copy) id /* block */ onRealTask;
@property (copy) id /* block */ onRealQueryTask;
@property (copy) id /* block */ resultBlock;

- (void)replaceFilePath:(id)a0 task:(id)a1;
- (void)executeAllResultBlock:(id)a0;
- (void)addResultBlock:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
