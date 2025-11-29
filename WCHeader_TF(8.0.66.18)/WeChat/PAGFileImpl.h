@interface PAGFileImpl : PAGCompositionImpl

+ (unsigned short)MaxSupportedTagLevel;
+ (BOOL)IsNetWorkPath:(id)a0;
+ (id)Load:(id)a0;
+ (id)Load:(const void *)a0 size:(unsigned long long)a1;
+ (id)Load:(const void *)a0 size:(unsigned long long)a1 path:(id)a2;
+ (void)LoadAsync:(id)a0 completionBlock:(id /* block */)a1;

- (unsigned short)tagLevel;
- (int)numTexts;
- (int)numImages;
- (int)numVideos;
- (id)path;
- (id)getTextData:(int)a0;
- (void)replaceText:(int)a0 data:(id)a1;
- (void)replaceImage:(int)a0 data:(id)a1;
- (void)replaceImageByName:(id)a0 data:(id)a1;
- (id)getLayersByEditableIndex:(int)a0 layerType:(long long)a1;
- (id)getEditableIndices:(long long)a0;
- (int)timeStretchMode;
- (void)seTimeStretchMode:(int)a0;
- (void)setDuration:(long long)a0;
- (id)copyOriginal;

@end
