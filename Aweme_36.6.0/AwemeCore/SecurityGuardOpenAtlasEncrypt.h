@class NSString;

@interface SecurityGuardOpenAtlasEncrypt : NSObject <ISecurityGuardOpenAtlasEncrypt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (id)atlasSafeEncrypt:(id)a0 authCode:(id)a1;

@end
