@class WAPackageSweeperLogic, WAContact, WAProvideApiConfig, WAAppTask;

@interface WAProvideApiHelper : NSObject

@property (retain, nonatomic) WAProvideApiConfig *config;
@property (retain, nonatomic) WAContact *waContact;
@property (retain, nonatomic) WAAppTask *task;
@property (nonatomic) BOOL isTempAppId;
@property (retain, nonatomic) WAPackageSweeperLogic *sweepLogic;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (unsigned long long)getNameIndex;
- (void)fillDefaultConfig;
- (void)sweepData;
- (BOOL)startUseApi;
- (void)invokeApi:(id)a0 Param:(id)a1 CallbackId:(unsigned int)a2;
- (void)stopUseApi;
- (void).cxx_destruct;

@end
