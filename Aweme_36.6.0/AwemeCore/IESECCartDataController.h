@class IESECCartDataHelper, IESECCartContext, NSString;

@interface IESECCartDataController : NSObject <YataNetConfigDelegate>

@property (retain, nonatomic) IESECCartContext *context;
@property (retain, nonatomic) IESECCartDataHelper *dataHelper;
@property (nonatomic) BOOL hasQuerySucceeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestMarketingResourceWithRequest:(id)a0 completion:(id /* block */)a1;

- (id)bizUpdateApi;
- (id)yataUplinkExParams;
- (id)bizQueryApi;
- (void)requestCartQueryWithScene:(unsigned long long)a0 extraExParams:(id)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
