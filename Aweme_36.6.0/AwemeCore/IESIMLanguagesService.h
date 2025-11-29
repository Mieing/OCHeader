@class NSString;

@interface IESIMLanguagesService : HTSService <IESIMLanguagesService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_setAlpGlobalDisableOperation:(BOOL)a0;
- (id)formatedNumber:(long long)a0;
- (id)formatedNumberToTenThousandCh:(long long)a0;
- (BOOL)isChinese;
- (BOOL)isCurrentLanguage:(id)a0;
- (id)translateCurrentString:(id)a0;
- (void)alp_disableLocalizations:(id)a0;
- (void)alp_setDisableOperationsCollection:(BOOL)a0 relatedMutableAttributedString:(id)a1;
- (void)alp_setDisableHook:(BOOL)a0 relatedObj:(id)a1;
- (void)alp_addReloadBlockForKey:(id)a0 andExecuteIt:(id /* block */)a1 relatedObj:(id)a2;
- (id)languageCode;

@end
