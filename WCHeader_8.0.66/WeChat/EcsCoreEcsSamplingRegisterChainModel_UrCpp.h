@class NSString;

@interface EcsCoreEcsSamplingRegisterChainModel_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsSamplingRegisterChainModel_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id)a0;

- (id)from:(int)a0;
- (id)strategy:(int)a0;
- (id)rate:(int)a0 base:(int)a1;
- (id)days:(int)a0;
- (void)done;

@end
