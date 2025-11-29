@class HTSEventContext;

@interface AWELiveVisibleScopeExemptionDataController : IESLiveListDataController

@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)trackFetchList:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)requestParams;

@end
