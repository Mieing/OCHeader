@interface UTDSecurityHelper : NSObject {
    id mSecurityManagerInstance;
    id mSecuritySignatureComp;
    id mSecurityGuardParamContext;
    BOOL mIsOpen;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (void)initSecurity;
- (id)getAppKey:(int)a0 authcode:(id)a1;
- (id)signRequest:(id)a0 param:(id)a1 requestType:(long long)a2 authcode:(id)a3;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
