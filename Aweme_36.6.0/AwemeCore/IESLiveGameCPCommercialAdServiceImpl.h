@class NSString;

@interface IESLiveGameCPCommercialAdServiceImpl : NSObject <IESGCPLiveCommercialAdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackAdEventWithLabel:(id)a0 refer:(id)a1 extra:(id)a2;
- (id)commercialAdContextParams;

@end
