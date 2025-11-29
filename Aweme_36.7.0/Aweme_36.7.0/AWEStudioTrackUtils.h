@interface AWEStudioTrackUtils : NSObject

+ (BOOL)removeMVTrackIfNeeded:(id)a0;
+ (void)setupRepoImageInfoInstance:(id)a0 imageURL:(id)a1 duration:(double)a2;
+ (void)updateEditCanvasStateWithPublishModel:(id)a0;
+ (BOOL)isBrokenVideoDataWithPublishModel:(id)a0;
+ (void)removeAllVideoAssetIfNeeded:(id)a0;
+ (BOOL)addMainTrackImage:(id)a0 publishModel:(id)a1 duration:(double)a2;
+ (BOOL)addMainTrackVideo:(id)a0 publishModel:(id)a1;
+ (void)switchRepoContextInfo:(id)a0;
+ (void)setupRepoVideoInfoInstance:(id)a0;

@end
