@interface WAJSEventHandler_getWxCommFont : WAJSEventHandler_BaseEvent

+ (id)enumerateFontsInFamily:(id)a0;
+ (id)enumerateAllFontFamilyNames;
+ (id)enumerateAllFontNames;
+ (id)getFontURL:(id)a0;
+ (id)getFontsMap;

- (struct hb_subset_input_t { } *)CreateSubsetInput:(id)a0;
- (id)subsetFont:(id)a0 codes:(id)a1 fontFamilyNameMatch:(id)a2;
- (BOOL)isSafePath:(id)a0;
- (void)handleJSEvent:(id)a0;

@end
