@class NSDictionary, ILASearchFaceFilter, NSArray;

@interface ILASearchFilter : NSObject

@property (nonatomic) int mediaType;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) float minAspectRatio;
@property (nonatomic) float maxAspectRatio;
@property (nonatomic) float minSharpnessScore;
@property (retain, nonatomic) NSDictionary *inCludeTags;
@property (retain, nonatomic) NSDictionary *exInCludeTags;
@property (retain, nonatomic) ILASearchFaceFilter *faceFilter;
@property (copy, nonatomic) NSArray *filterIds;

- (struct shared_ptr<ILASDK::SearchFilter> { struct SearchFilter *x0; struct __shared_weak_count *x1; })coverToSearchFilter;
- (void).cxx_destruct;

@end
