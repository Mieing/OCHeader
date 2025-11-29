@interface DetectOnlyState : BaseState {
    BOOL needBigFaceMode;
    struct YtFaceDetParam { int min_face_size; int max_face_size; float scale_factor; float net1_threshold; float net2_threshold; float final_threshold; int net1_size; float nms_threshold; BOOL bigger_face_mode; BOOL non_square_rect; } param;
    struct YTFaceDetection { struct YtFaceDetection *x0; } *detector;
}

- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)unload;
- (void)reset;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 withTimeStamp:(unsigned long long)a1;
- (id).cxx_construct;

@end
