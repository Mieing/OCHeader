@class NSArray, NSString, AWEIMSearchNetworkRequestResult;

@interface AWEIMSearchRecommendDataManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSArray *lastData;
@property (retain, nonatomic) AWEIMSearchNetworkRequestResult *lastResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchRecomendData:(id /* block */)a0;
- (void)fetchRecomendDataResult:(id /* block */)a0;
- (id)lastRecomendData;
- (id)lastRecomendDataResult;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
