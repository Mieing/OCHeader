@class NSString;

@interface MMTranslateLanguageMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setTranslateLanguage:(id)a0;
- (id)setFollowSystemLanguage;
- (BOOL)isFollowSystemLanguage;
- (id)currentTranslateLanguage;
- (id)currentTranslateLanguageDisplayName;
- (id)getSupportedTranslateLanguages;
- (id)getSupportedTranslateLanguageDisplayNames;
- (id)setTranslateLanguage:(id)a0 followSystemLanguage:(BOOL)a1;

@end
