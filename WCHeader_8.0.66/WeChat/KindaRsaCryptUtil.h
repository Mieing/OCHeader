@class NSString;

@interface KindaRsaCryptUtil : NSObject <MMRsaCryptUtil>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rsaPublicEncryptPemkey:(id)a0 pemKey:(id)a1;

@end
