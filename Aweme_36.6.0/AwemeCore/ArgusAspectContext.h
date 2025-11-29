@class NSString, ArgusBaseAsepctParams, ArgusAspectVerifyResult, NSDictionary, NSArray, ArgusContainerConfig;

@interface ArgusAspectContext : ArgusBaseVerifyContext

@property (retain, nonatomic) ArgusContainerConfig *containerConfig;
@property (readonly, copy, nonatomic) NSString *argusBizContainerId;
@property (readonly, nonatomic) long long aspectType;
@property (readonly, nonatomic) NSString *aspectName;
@property (nonatomic) long long switchMode;
@property (readonly, nonatomic) ArgusBaseAsepctParams *aspectParams;
@property (retain, nonatomic) ArgusAspectVerifyResult *verifyResult;
@property (retain, nonatomic) ArgusAspectVerifyResult *reportOnlyVerifyResult;
@property (retain, nonatomic) NSDictionary *realStrategyVerifyRecord;
@property (retain, nonatomic) NSDictionary *reportOnlyStrategyVerifyRecord;
@property (retain, nonatomic) NSArray *asyncReportCallbacks;

- (id)initWithArgusCId:(id)a0 containerConfig:(id)a1 aspectType:(long long)a2 aspectParams:(id)a3;
- (void)addAsyncReportCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
