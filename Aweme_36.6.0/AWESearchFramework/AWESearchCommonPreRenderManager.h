@class AWESearchCommonPreRenderConfig, NSString, NSSet;

@interface AWESearchCommonPreRenderManager : AWESearchClientAIBaseManager

@property (retain, nonatomic) AWESearchCommonPreRenderConfig *preRenderConfig;
@property (copy, nonatomic) NSString *pitayaTraceID;
@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSSet *featureSet;
@property (copy, nonatomic) id /* block */ taskCallBack;

- (void)startClientAITaskWithTriggerType:(unsigned long long)a0 callback:(id /* block */)a1;
- (BOOL)managerPrecheck;
- (void)managerPrecheckFail;
- (void)managerPackageNotFound;
- (BOOL)managerCheckInputModel;
- (void)managerInputModelInvalid;
- (void)managerGetPTYTaskData:(id)a0;
- (void)managerPTYOutputError;
- (id)managerFetchInputParams;
- (id)stringBySenceType:(unsigned long long)a0;
- (id)getLastCount:(unsigned long long)a0 ElementsWithArray:(id)a1;
- (id)getFirstCount:(unsigned long long)a0 ElementsWithArray:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
