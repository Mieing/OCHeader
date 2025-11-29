@class NSArray;

@interface IESMMAlgorithmResultEffectBachData : IESMMAlgorithmResultData

@property (nonatomic) BOOL valid;
@property (nonatomic) int face_count;
@property (retain, nonatomic) NSArray *face_rect;
@property (nonatomic) int body_count;
@property (retain, nonatomic) NSArray *body_rect;
@property (nonatomic) int image_width;
@property (nonatomic) int image_height;

- (void).cxx_destruct;

@end
