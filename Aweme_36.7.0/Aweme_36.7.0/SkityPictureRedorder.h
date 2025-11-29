@interface SkityPictureRedorder : NSObject {
    struct unique_ptr<skity::PictureRecorder, std::default_delete<skity::PictureRecorder>> { struct PictureRecorder *__ptr_; } _recorder;
}

- (id)beginRecord:(double)a0;
- (id)finishRecord;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
