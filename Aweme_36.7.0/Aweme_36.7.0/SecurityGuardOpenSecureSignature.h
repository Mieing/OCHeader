@class NSString;

@interface SecurityGuardOpenSecureSignature : NSObject <ISecurityGuardOpenSecureSignature>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (id)signRequest:(id)a0 authCode:(id)a1;
- (id)getSafeCookie:(id)a0 secretKey:(id)a1 authCode:(id)a2;
- (struct _HashMap { struct **x0; int x1; struct array_list_t *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; } *)NSDictionary2HashMap:(id)a0;
- (id)callCoreSignFunctionsWithArray:(id)a0 appKey:(id)a1 signType:(long long)a2 mask:(id)a3;

@end
