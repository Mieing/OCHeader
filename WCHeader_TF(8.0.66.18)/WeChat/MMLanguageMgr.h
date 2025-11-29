@class NSString, NSBundle, MMLanguageCache, NSCache;

@interface MMLanguageMgr : MMRootService <WCLazyInitObjectProtocol, MMServiceProtocol> {
    NSString *m_nsCurSystemLanguage;
    NSString *m_curLanguage;
    NSBundle *m_curBundle;
    NSBundle *m_updateBundle;
    NSBundle *m_backupBundle;
    NSBundle *m_updateBackupBundle;
    MMLanguageCache *m_lanCache;
    BOOL m_lanCacheIsSaved;
    BOOL m_firstInitLanguage;
}

@property (nonatomic) BOOL downloadPackageRightNow;
@property (retain, nonatomic) NSCache *valueToIdCache;
@property (nonatomic) BOOL haveLazyInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (void)cacheInNSCacheStringValue:(id)a0 withKey:(id)a1;
- (id)getStringKeyInNSCacheByValue:(id)a0;
- (id)getStringForCurLanguage:(id)a0;
- (id)getStringFromDynamicConfig:(id)a0;
- (id)keyMapping:(id)a0;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (id)getLangPackageRootPath;
- (id)getLangPackagePathForLang:(id)a0;
- (id)getLangPackageFileForLang:(id)a0;
- (id)getLanguagePath;
- (id)internalGetCurLanguage;
- (void)internalChangeCurLanguage;
- (void)internalSetCurLanguage:(id)a0;
- (id)trimForiOS9Plus:(id)a0;
- (id)getCurSystemLanguage;
- (id)getRealCurSystemLanguage;
- (id)isSupportedLanguage:(id)a0;
- (id)getSupportedLanguageKeys;
- (id)getBackUpLanguage;
- (void)initBackUpLanguage:(id)a0;
- (BOOL)isLanaguageValid;
- (void)initCache;
- (id)getCacheString:(id)a0;
- (void)resetString:(id)a0 for:(id)a1;
- (void)initLanguage;
- (id)correctMainBundle;
- (id)init;
- (id)getCurBundle;
- (id)getCurLanguage;
- (id)getCurLanguageDisplayName;
- (id)getSupportedLanguages;
- (id)getSupportedLanguageDisplayNames;
- (id)getStringForCurLanguageWithBackupBundle:(id)a0 table:(id)a1;
- (id)p_getStringForCurLanguage:(id)a0;
- (id)getStringForLanguage:(id)a0 withID:(id)a1;
- (BOOL)curLanguageIsEnglish;
- (BOOL)curLanguageIsChinese;
- (BOOL)curLanguageIsChineseTraditional;
- (void)setCurLanguage:(id)a0 forRefresh:(BOOL)a1 withViewScene:(unsigned int)a2 shouldChangeMainFrame:(BOOL)a3;
- (void)setCurLanguage:(id)a0 shouldChangeMainFrame:(BOOL)a1;
- (void)refreshNewVersionForCurLanguage:(id)a0 fromViewScene:(unsigned int)a1;
- (void)ClearOlderVersionData;
- (BOOL)isVersionString:(id)a0 olderThanMajor:(unsigned int *)a1 minor:(unsigned int *)a2 minorex:(unsigned int *)a3;
- (BOOL)isTranslateLanguageFollowSystemLanguage;
- (id)currentTranslateLanguage;
- (id)currentTranslateLanguageDisplayName;
- (id)getSupportedTranslateLanguages;
- (id)getSupportedTranslateLanguageDisplayNames;
- (void)setTranslateLanguage:(id)a0 followSystemLanguage:(BOOL)a1;
- (void).cxx_destruct;

@end
