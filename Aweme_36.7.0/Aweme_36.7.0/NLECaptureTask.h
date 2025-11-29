@interface NLECaptureTask : NSObject

@property (nonatomic) struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } timeStamps;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL withEffect;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
