@class NSArray;

@interface MAHeatMapVectorOverlayOptions : NSObject

@property (nonatomic) struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } startIndex;
@property (nonatomic) struct vector<_GLKVector4, std::allocator<_GLKVector4>> { union _GLKVector4)"__end_"^(_GLKVector4)"__end_cap_"{__compressed_pair<_GLKVector4 *, std::allocator<_GLKVector4>> { } *__begin_; union _GLKVector4)"__end_cap_"{__compressed_pair<_GLKVector4 *, std::allocator<_GLKVector4>> { } *__end_; struct __compressed_pair<_GLKVector4 *, std::allocator<_GLKVector4>> { union _GLKVector4) { } *__value_; } __end_cap_; } colorList;
@property (nonatomic) long long type;
@property (nonatomic) BOOL visible;
@property (retain, nonatomic) NSArray *inputNodes;
@property (nonatomic) double size;
@property (nonatomic) double gap;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *startPoints;
@property (nonatomic) double opacity;
@property (nonatomic) int maxIntensity;
@property (nonatomic) double minZoom;
@property (nonatomic) double maxZoom;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
