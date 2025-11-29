@class NSMutableArray;

@interface NLEWatermarkEntity_OC : NSObject

@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) long long interval;
@property (nonatomic) long long xOffset;
@property (nonatomic) long long yOffset;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long sequenceIn;
@property (nonatomic) long long sequenceOut;
@property (nonatomic) long long position;
@property (nonatomic) long long rotation;

- (void)setCppImages:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })a0;
- (void).cxx_destruct;

@end
