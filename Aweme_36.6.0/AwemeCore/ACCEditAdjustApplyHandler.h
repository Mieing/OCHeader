@interface ACCEditAdjustApplyHandler : NSObject

+ (void)applyAdjust:(id)a0 material:(id)a1 megaEditor:(id)a2;
+ (id)getMainTrackData:(id)a0;
+ (void)updateAdjustEnable:(BOOL)a0 material:(id)a1 megaEditor:(id)a2;
+ (id)getAdjustMapInfo:(id)a0;
+ (BOOL)hasAppliedAdjust:(id)a0;
+ (void)applyAdjustToGlobalWithResource:(id)a0 megaEditor:(id)a1;
+ (void)applyAdjustToTrackWithResource:(id)a0 megaEditor:(id)a1;
+ (void)applyAdjustToAllClipsWithResource:(id)a0 megaEditor:(id)a1;
+ (void)applyAdjustToClipWithResource:(id)a0 megaEditor:(id)a1 videoClip:(id)a2;
+ (void)clearAdjustAll:(id)a0;
+ (void)clearAdjustFromVideoClip:(id)a0 megaEditor:(id)a1;
+ (void)updateAllAdjustEnable:(BOOL)a0 megaEditor:(id)a1;
+ (BOOL)adjustHasBeenSegmented:(id)a0;
+ (BOOL)adjustHasBeenSegmented:(id)a0 resource:(id)a1;
+ (BOOL)hasAppliedAdjust:(id)a0 videoClip:(id)a1;
+ (BOOL)hasAppliedAdjustWithPublishViewModel:(id)a0;
+ (id)getResourceFromAdjustData:(id)a0;

@end
