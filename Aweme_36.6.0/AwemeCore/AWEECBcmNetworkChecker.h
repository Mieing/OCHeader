@class NSArray, NSDictionary, NSString;

@interface AWEECBcmNetworkChecker : NSObject <IESECHTTPInterceptor>

@property (class, readonly) AWEECBcmNetworkChecker *shared;

@property BOOL hookFinish;
@property BOOL syncFinish;
@property (retain, nonatomic) NSDictionary *originSettings;
@property int enable;
@property int shouldReportSuccess;
@property (copy, nonatomic) NSArray *monitorList;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) NSArray *extraOrderPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathPrefixToIntercept;
+ (void)handleRequestWithContext:(id)a0;

- (void)hookNetwork;
- (void)checkRequest:(id)a0 response:(id)a1 data:(id)a2;
- (void)checkRequest:(id)a0 accordingToMonitor:(id)a1 response:(id)a2 data:(id)a3;
- (id)bodyToParams:(id)a0;
- (id)checkPointsResultFrom:(id)a0 requestParams:(id)a1;
- (id)appendInfo:(id)a0 accordingToData:(id)a1;
- (void)reportResultIsSuccess:(BOOL)a0 info:(id)a1;
- (id)_queryParamDictDecoded:(id)a0;
- (id)checkRequestParams:(id)a0 accordingToCheckPoint:(id)a1;
- (id)checkRequestParams:(id)a0 location:(id)a1 paramName:(id)a2 allowValue:(id)a3 uploadRow:(int)a4;
- (BOOL)isObjectEmpty:(id)a0;
- (id)valueOfLocation:(id)a0 inParams:(id)a1;
- (id)valueFrom:(id)a0 index:(int)a1 locations:(id)a2;
- (void)reportBcmChainLossWithPath:(id)a0;
- (id)generateBackupBcmChain;
- (void)syncSettings;
- (void).cxx_destruct;
- (id)init;

@end
