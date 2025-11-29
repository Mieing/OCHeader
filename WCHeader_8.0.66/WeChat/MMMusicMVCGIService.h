@class NSString, NSMutableDictionary;

@interface MMMusicMVCGIService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *postingMVModeldDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)sendGetMVInfoReqWithObjectId:(unsigned long long)a0 nonceId:(id)a1;
- (void)postMVWithMVModel:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)reportFinderPostSuccess:(id)a0;
- (void)reportFinderPostFailure:(id)a0;
- (void).cxx_destruct;

@end
