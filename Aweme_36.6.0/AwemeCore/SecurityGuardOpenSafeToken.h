@class NSString;

@interface SecurityGuardOpenSafeToken : NSObject <ISecurityGuardOpenSafeToken>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (BOOL)saveToken:(id)a0 forKey:(id)a1 additional:(id)a2 flag:(int)a3;
- (BOOL)isTokenExist:(id)a0;
- (id)encryptWithToken:(id)a0 inputData:(id)a1 flag:(int)a2;
- (id)decryptWithToken:(id)a0 inputData:(id)a1 flag:(int)a2;
- (id)signWithToken:(id)a0 inputData:(id)a1 flag:(int)a2;
- (id)getOtp:(id)a0 flag:(int)a1 strings:(id)a2 byteArgs:(id)a3;
- (id)getOtp:(id)a0 flag:(int)a1 strings:(id)a2 byteArgs:(id)a3 authCode:(id)a4;
- (id)safeTokenOperation:(int)a0 forKey:(id)a1 needProcessData:(id)a2 additional:(id)a3 flag:(int)a4;
- (void)removeToken:(id)a0;

@end
