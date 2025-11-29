@class NSMutableDictionary, NSMutableArray;

@interface WAJSContextPlugin_Font : WAJSContextPluginBase {
    NSMutableDictionary *_fontFamilyDic;
    NSMutableArray *_loadedFonts;
}

- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (id)init;
- (void)loadFontWithFamily:(id)a0 fontData:(id)a1 desc:(id)a2 errMsg:(id *)a3;
- (BOOL)validateFont:(struct CGFont { } *)a0 withDescriptor:(id)a1;
- (void)unloadAllFont;
- (id)getRealFontFamilyForKey:(id)a0;
- (void).cxx_destruct;

@end
