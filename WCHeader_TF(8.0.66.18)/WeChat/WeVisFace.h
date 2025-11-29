@interface WeVisFace : NSObject {
    struct TrackerManager { int mWidth; int mHeight; long long mTrackerConfig; struct unique_ptr<WeEffect::TrackerManager::TrackerManagerImpl, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct __compressed_pair<WeEffect::TrackerManager::TrackerManagerImpl *, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct TrackerManagerImpl *__value_; } __ptr_; } mImpl; } trackerManager;
}

- (int)initFace;
- (int)initFace:(id)a0;
- (int)detectImage:(const char *)a0 imgWidth:(int)a1 imgHeight:(int)a2 imgFormat:(int)a3 imgRotate:(int)a4;
- (void)getFaceRect:(id)a0;
- (void)getFaceAlignment:(id)a0;
- (void)getPartConfidence:(id)a0;
- (void)getPoseAngle:(id)a0;
- (void)releaseFace;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
