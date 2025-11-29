@class IESECListKitDynamicRequest;

@interface AWEECMallSubDataManager : NSObject

@property (retain, nonatomic) IESECListKitDynamicRequest *dynamicRequest;

+ (id)commonParams;
+ (id)firstScreenRequestModelWithParams:(id)a0;
+ (id)loadMoreRequestModelWithParams:(id)a0;
+ (id)refreshRequestModelWithParams:(id)a0;
+ (void)reportImpressionWithParams:(id)a0 completion:(id /* block */)a1;

- (void)sendRequest:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
