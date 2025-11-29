@interface AWEKnowledgeAlbumInsScaleTool : NSObject

+ (id)aspectRatioLimitForDetailAlbumElement;
+ (BOOL)shouldImageBackgroundColorFollowContainerForScenes:(id)a0;
+ (BOOL)disableCropImageForScenes:(id)a0;
+ (double)calculateWHRatioWithModel:(id)a0;
+ (double)calculateWHRatioWithModel:(id)a0 fromDetail:(BOOL)a1;
+ (double)calculateWHRatioForOptimize:(id)a0;
+ (double)calculatePanelAlbumItemHeight:(id)a0;
+ (id)aspectRatioLimitForDetailAlbumElementFromDetail:(BOOL)a0;
+ (id)aspectRatioLimitForAlbumInsScale;
+ (BOOL)albumDetailBackgroundColorOptWith:(id)a0 referString:(id)a1;

- (id)init;

@end
