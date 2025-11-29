@class NSString;

@interface IESLocalLifeNetworkHostService : HTSService <IESLocalLifeNetworkHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestWithRequest:(id)a0;
- (void)downloadWithRequest:(id)a0;
- (id)convertNetworkRequest:(id)a0;
- (long long)convertNetworkRequestType:(long long)a0;
- (id)tt_httpResponseByModel:(id)a0;
- (void)updateIesll_tt_httpResponse:(id)a0 byModel:(id)a1;

@end
