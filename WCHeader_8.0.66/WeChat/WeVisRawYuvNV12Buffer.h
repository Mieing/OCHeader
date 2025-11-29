@interface WeVisRawYuvNV12Buffer : NSObject {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } buffer;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (id)copyFromCVPixelBuffer:(struct __CVBuffer { } *)a0;

- (char *)dataPtr;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
