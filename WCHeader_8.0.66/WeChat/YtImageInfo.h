@class NSString, NSArray;

@interface YtImageInfo : JSONModel

@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSArray *five_points;
@property (retain, nonatomic) NSString *checksum;

- (id)initWithImage:(id)a0 faceShape:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a1 checksum:(id)a2;
- (id)initWithImage:(id)a0 imgPts:(id)a1 checksum:(id)a2;
- (void).cxx_destruct;

@end
