@class OMCTimeline, OMCProject;

@interface OMCComposingSession : NSObject {
    struct SharedPtr<XMSComposingSession> { struct XMSComposingSession *_ptr; } _backingComposingSession;
    OMCTimeline *_timeline;
}

@property (readonly, nonatomic) OMCProject *project;
@property (readonly, nonatomic) OMCTimeline *timeline;

+ (id)sessionWithProject:(id)a0 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 calcDurationWithAllSegments:(BOOL)a3;
+ (id)sessionWithProject:(id)a0 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 calcDurationWithAllSegments:(BOOL)a3 shouldUseSourceURL:(BOOL)a4;

- (id)initWithBackingComposingSession:(const void *)a0 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithBackingComposingSession:(const void *)a0 project:(id)a1 timeline:(id)a2;
- (id)undo;
- (id)redo;
- (void)undoWithCompletion:(id /* block */)a0;
- (void)redoWithCompletion:(id /* block */)a0;
- (void)takeSnapshotWithOpDesc:(id)a0;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (long long)currentComposingStepIndex;
- (long long)maxComposingStepIndex;
- (void)updateProject;
- (BOOL)isClipSegmentMutated:(id)a0 originAssetID:(id)a1;
- (void)exportClipbundleWithCoverImage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
