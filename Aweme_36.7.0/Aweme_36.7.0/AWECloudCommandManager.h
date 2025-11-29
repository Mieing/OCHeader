@class NSString, NSArray, AWECloudCommandParamModel, NSMutableDictionary, NSDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWECloudCommandNetworkDelegate;

@interface AWECloudCommandManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _customClsRWLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSOperationQueue *commandExecutionQueue;
@property (retain, nonatomic) NSMutableArray *customCommandHandlerClsMutableArray;
@property (retain, nonatomic) NSMutableDictionary *commandIDDic;
@property (copy, nonatomic) id /* block */ cloudCommandParamModelBlock;
@property (readonly, nonatomic) AWECloudCommandParamModel *cloudCommandParamModel;
@property (copy, nonatomic) id /* block */ commonParamsBlock;
@property (readonly, copy, nonatomic) NSDictionary *commonParams;
@property (retain, nonatomic) id<AWECloudCommandNetworkDelegate> networkDelegate;
@property (copy, nonatomic) id /* block */ URLBlock;
@property (copy, nonatomic) NSArray *blockList;
@property (readonly, copy, nonatomic) NSArray *customCommandHandlerClsArray;
@property (copy, nonatomic) id /* block */ forbidCloudCommandExecute;
@property (copy, nonatomic) id /* block */ diskPathsComplianceHandler;
@property (copy, nonatomic) id /* block */ forbidCloudCommandUpload;
@property (copy, nonatomic) NSString *host;

+ (id)sharedInstance;

- (void)getCloudCommandDataByPush:(id)a0;
- (void)addCustomCommandHandlerCls:(Class)a0;
- (void)_getCloudControlCommandDataWithPushParams:(id)a0;
- (id)_fetchURLString;
- (void)_executeCommandWithJsonObject:(id)a0 ran:(id)a1;
- (void)executeCommandWithData:(id)a0 ran:(id)a1;
- (void)_executeCommand:(id)a0;
- (void)_postCommandResponse:(id)a0;
- (long long)_getCommandRetryNumbersWithKey:(id)a0;
- (id)_paramDictionaryWithResult:(id)a0;
- (id)_uploadURLString;
- (void)addCustomCommandHandlerClsArray:(id)a0;
- (void)getCloudControlCommandData;
- (void)executeCommandWithData:(id)a0;
- (void)_saveCommandRetryNumbersWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
