@class NSString;

@interface SecurityGuardOpenUMID : NSObject <ISecurityGuardOpenUMID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (void)resetClientData:(int)a0;
- (void)setOnlineHost:(id)a0;
- (void)registerInitListener:(id /* block */)a0;
- (BOOL)initUMID:(id)a0 environment:(int)a1 authCode:(id)a2 handler:(id /* block */)a3;
- (id)getSecurityToken;
- (id)getSecurityToken:(int)a0;
- (id)getUMIDVersion;

@end
