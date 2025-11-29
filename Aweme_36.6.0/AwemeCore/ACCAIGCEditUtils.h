@interface ACCAIGCEditUtils : NSObject

+ (BOOL)replaceEditorMainTrackWithURL:(id)a0 resourceType:(unsigned long long)a1 duration:(id)a2 megaEditor:(id)a3;
+ (BOOL)canMainTrackWithOriginModel:(id)a0 originMaterialId:(id)a1 resultModel:(id)a2 resultMaterialId:(id)a3 megaEditor:(id)a4;
+ (BOOL)updateMainTrackWithOriginModel:(id)a0 originMaterialId:(id)a1 resultModel:(id)a2 resultMaterialId:(id)a3 megaEditor:(id)a4;
+ (BOOL)updateMainTrackToModel:(id)a0 materialId:(id)a1 megaEditor:(id)a2;
+ (double)videoTrackDurationWithFilePath:(id)a0;
+ (BOOL)replaceIndexMainTrackEditorWithURL:(id)a0 resourceType:(unsigned long long)a1 duration:(id)a2 originalIndex:(unsigned long long)a3 megaEditor:(id)a4;

@end
