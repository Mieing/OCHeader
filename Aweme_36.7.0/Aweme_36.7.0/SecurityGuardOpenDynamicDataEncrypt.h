@class NSString;

@interface SecurityGuardOpenDynamicDataEncrypt : NSObject <ISecurityGuardOpenDynamicDataEncrypt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (id)dynamicEncrypt:(id)a0;
- (id)dynamicDecrypt:(id)a0;
- (id)dynamicEncryptByteArray:(id)a0;
- (id)dynamicDecryptByteArray:(id)a0;
- (id)dynamicEncryptDDp:(id)a0;
- (id)dynamicDecryptDDp:(id)a0;
- (id)dynamicEncryptByteArrayDDp:(id)a0;
- (id)dynamicDecryptByteArrayDDp:(id)a0;
- (id)dynamicCrypt:(int)a0 value:(id)a1 isDDp:(unsigned char)a2;

@end
