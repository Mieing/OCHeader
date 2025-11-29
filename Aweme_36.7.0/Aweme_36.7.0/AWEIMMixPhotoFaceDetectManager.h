@interface AWEIMMixPhotoFaceDetectManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)checkFaceImageForMixPhoto:(id)a0 checkModel:(id)a1 imagePath:(id)a2 trackExt:(id)a3 complete:(id /* block */)a4;
- (void)p_trackFaceDetectWithResult:(BOOL)a0 duration:(double)a1 extra:(id)a2;
- (void)checkFaceImageForMixPhoto:(id)a0 checkModel:(id)a1 trackExt:(id)a2 complete:(id /* block */)a3;
- (id)faceInfoForImage:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
