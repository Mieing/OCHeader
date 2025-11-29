@class NSString;

@interface CreatePOIMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)createPOI:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
