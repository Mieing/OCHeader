@interface VEEffectImage : IESMMObject {
    struct bef_image_t { char *x0; int x1; int x2; int x3; int x4; int x5; } *_image;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int stride;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long orientation;

- (id)initWithEffectImage:(void *)a0;
- (const char *)getData;
- (void)dealloc;
- (void *)getImage;

@end
