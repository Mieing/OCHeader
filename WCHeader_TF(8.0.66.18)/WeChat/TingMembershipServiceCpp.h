@class NSString;

@interface TingMembershipServiceCpp : UnitRCObjcBaseProxyClass <TingMembershipService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)membershipInfo;
- (void)updateMembershipInfo:(id)a0;
- (void)setNeedsUpdateMembershipInfo;
- (void)refreshMembershipInfoIfNeeded;
- (void)fetchMembershipInfoAsync:(id /* block */)a0;
- (void)fetchMembershipAsync:(BOOL)a0 callback:(id /* block */)a1;
- (void)fetchJoinInfoAsync:(id)a0 callback:(id /* block */)a1;
- (void)fetchJoinMembershipInfoAsync:(id)a0 callback:(id /* block */)a1;
- (void)joinAsync:(id)a0 callback:(id /* block */)a1;
- (void)unbindQQMusic:(id /* block */)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;

@end
