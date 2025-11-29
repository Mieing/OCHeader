@class IESECCollectContext, NSString;

@interface IESECCollectDataController : NSObject <YataNetConfigDelegate>

@property (weak, nonatomic) IESECCollectContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUplinkConfigParamsWithTriggerType:(id)a0 node:(id)a1 eventFields:(id)a2;
- (id)commonExParams;
- (id)commonYataParam;
- (void)requestQueryWithScene:(id)a0 extraExParams:(id)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
