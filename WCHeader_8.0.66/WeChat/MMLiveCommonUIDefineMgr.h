@class NSString;

@interface MMLiveCommonUIDefineMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long liveBusinessType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;

@end
