@class AWESearchClientAIBaseManagerConfig, NSMutableDictionary, NSDictionary, NSString;

@interface AWESearchClientAIBaseManager : NSObject <AWESearchClientAIManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *lastTaskTimeDict;
@property (retain, nonatomic) AWESearchClientAIBaseManagerConfig *config;
@property (copy, nonatomic) NSDictionary *inputParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)managerPrecheck;
- (void)managerPrecheckFail;
- (BOOL)managerCheckPackage;
- (void)managerPackageNotFound;
- (BOOL)managerCheckInputModel;
- (void)managerInputModelInvalid;
- (void)managerRunPTYTask;
- (BOOL)enableDownLoadSearchPitayaPackageopt;
- (BOOL)checkTimeWithGapTime:(double)a0 andMethodName:(id)a1;
- (void)managerGetPTYTaskData:(id)a0;
- (void)managerPTYOutputError;
- (id)managerFetchInputParams;
- (void)startClientAITask;
- (void).cxx_destruct;
- (void)showMessage:(id)a0;
- (id)initWithConfig:(id)a0;

@end
