@class NSString, CLLocation;

@interface BrandServiceSearchMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (unsigned int)sendDetailPageDataQuickRequest:(unsigned long long)a0 Keyword:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
