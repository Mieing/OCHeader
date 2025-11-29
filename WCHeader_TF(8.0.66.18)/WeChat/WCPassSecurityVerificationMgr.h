@class NSString;

@interface WCPassSecurityVerificationMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)processSecurityVerificationPassedEvent:(BOOL)a0 type:(unsigned long long)a1;

@end
