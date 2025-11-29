@interface NLESegmentVideoUtil : NSObject

+ (BOOL)equalToDefaultCrop:(struct shared_ptr<cut::model::NLEStyCrop> { struct NLEStyCrop *x0; struct __shared_weak_count *x1; })a0;
+ (struct CGSize { double x0; double x1; })cropSizeForVideoSegment:(struct shared_ptr<cut::model::NLESegmentVideo> { struct NLESegmentVideo *x0; struct __shared_weak_count *x1; })a0;
+ (struct shared_ptr<cut::model::NLEResourceAV> { struct NLEResourceAV *x0; struct __shared_weak_count *x1; })getResourceForSegment:(struct shared_ptr<cut::model::NLESegmentVideo> { struct NLESegmentVideo *x0; struct __shared_weak_count *x1; })a0;

@end
