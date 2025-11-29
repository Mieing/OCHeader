@class UIImage;

@interface AWEHPChannelImageModel : AWEHPBaseComponentModel

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long type;

- (id)initWithType:(long long)a0 image:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
