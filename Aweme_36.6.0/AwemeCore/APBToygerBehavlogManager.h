@class NSDictionary, BisBehavLog;

@interface APBToygerBehavlogManager : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) BisBehavLog *behavLog;

- (void)clearTask;
- (id)generateLogWithInvokeType:(id)a0 withRetry:(long long)a1;
- (id)buildClientInfo;
- (id)buildToken;
- (id)buildCommon;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)currentTime;
- (id)initWithConfig:(id)a0;

@end
