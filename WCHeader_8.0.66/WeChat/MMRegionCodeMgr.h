@class NSString, SafeDictionaryWrap, NSMutableArray;

@interface MMRegionCodeMgr : MMRootService <MMServiceProtocol, IMMRegionPackageDownloadMgrExt, IMMLanguageMgrExt> {
    SafeDictionaryWrap *m_regionDict;
    NSMutableArray *m_pickedRegionAry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodeCountry:(id)a0 province:(id)a1 city:(id)a2;
+ (int)numberOfOccurrencesOfString:(id)a0 inString:(id)a1;

- (id)init;
- (void)setRegionDictForCurLang;
- (id)getDisplayRegionWithCountry:(id)a0 province:(id)a1 city:(id)a2;
- (id)getValueForKey:(id)a0;
- (id)getRegionForCode:(id)a0;
- (id)getRegionCodeFromString:(id)a0 type:(int)a1;
- (id)getCountries;
- (id)getChildrenOfCode:(id)a0;
- (id)getRegionCodeLangForCurLang:(id)a0;
- (void)splitRegionCodeFile:(id)a0 Lang:(id)a1;
- (void)trySplitRegionCodeFile:(id)a0 Lang:(id)a1 force:(BOOL)a2;
- (id)readRegionCodeFileForLang:(id)a0;
- (void)onRegionPackageUpdated;
- (void)onLanguageChange;
- (void)pushData:(id)a0;
- (void)popupData;
- (id)getPickedResult;
- (void)removePickedResult;
- (BOOL)isZhCN:(id)a0;
- (BOOL)isCountryTW:(id)a0;
- (BOOL)isCountryHK:(id)a0;
- (BOOL)isCountryMO:(id)a0;
- (BOOL)isProvinceTW:(id)a0;
- (BOOL)isProvinceHK:(id)a0;
- (BOOL)isProvinceMO:(id)a0;
- (void).cxx_destruct;

@end
