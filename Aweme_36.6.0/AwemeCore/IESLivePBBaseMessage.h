@class NSString;

@interface IESLivePBBaseMessage : GPBMessage <IESLiveGPBMessageInstaller>

@property (class, nonatomic) BOOL replaceEnumEnabled;
@property (class, nonatomic) BOOL commonKVCProtectionEnabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (void)install;

- (void)mergeFrom:(id)a0;
- (id)getObjects;
- (void)preUniformGetterAndSetter;
- (void)preUniformSingleInt64ToStringWithField:(id)a0;
- (void)exchangeIMPWithMixField:(id)a0 withUniformType:(unsigned char)a1 methodIsGetter:(BOOL)a2;
- (void)preUniformSaaSFiled:(id)a0 WithConfig:(id)a1;
- (void)ieslive_base_message_protect_merge_from:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void)setObjects:(id)a0;

@end
