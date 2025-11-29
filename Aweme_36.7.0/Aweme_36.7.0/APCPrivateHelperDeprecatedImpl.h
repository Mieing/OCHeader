@class NSString;

@interface APCPrivateHelperDeprecatedImpl : HTSService <APCPrivateHelperDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createComposerCreationImpl;

- (id)dictionaryToJson:(id)a0;
- (long long)supportOptions:(id)a0;
- (void)updateWithSupportOptions:(long long)a0 to:(id)a1;
- (id)createComposerInstance;
- (id)createComposerExportInstanceWithIdentifier:(id)a0;
- (void)resetFeatureConfig:(id)a0 mode:(long long)a1;

@end
