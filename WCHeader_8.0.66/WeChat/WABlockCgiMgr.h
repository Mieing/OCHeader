@class NSString;

@interface WABlockCgiMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeBlockCgiRequestCmd:(id)a0;
- (BOOL)isCgi:(unsigned long long)a0 blockedForAppid:(id)a1 username:(id)a2 inScene:(unsigned long long)a3;

@end
