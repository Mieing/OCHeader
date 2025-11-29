@class NSString;

@interface NLESegmentBrushSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentBrushSticker> { struct NLESegmentBrushSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned long long optionType;
@property (nonatomic) unsigned long long undoCount;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *initalizeParam;
@property (copy, nonatomic) NSString *param;
@property (nonatomic) struct CGPoint { double x0; double x1; } touchPoint;
@property (nonatomic) long long updateMode;

@end
