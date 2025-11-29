@interface CSJLocalStringModel : NSObject

+ (id)localLanguageDic;
+ (id)vaildLanguage;
+ (id)vaildLanguageUsedForLocalPath;
+ (void)bu_saveForceLanguangeFromServerWithLanguage:(id)a0;
+ (BOOL)containsLanguage:(id)a0;
+ (id)bu_getForceLanguageFromCache;

@end
