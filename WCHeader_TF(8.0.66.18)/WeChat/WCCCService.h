@class NSString;

@interface WCCCService : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAndUploadUsedsDataLoop;
- (void)fetchAndUploadUsedsData;
- (void)onServiceInit;

@end
