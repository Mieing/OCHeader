@class UIImageView, UIImage, NSString;

@interface AWETransformerImageElement : AWETransformerSingleElement

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *activeSrc;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long contentMode;

+ (id)elementType;

- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)renderElement;
- (void)updateWithNewElement:(id)a0;
- (void)__updateImageElement;
- (void).cxx_destruct;
- (void)loadView;

@end
