@class UIImageView;

@interface AWEIMMessageVoipButton : UIControl

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long customType;
@property (nonatomic) unsigned long long customStyle;

+ (id)buttonWithType:(unsigned long long)a0;
+ (id)buttonWithType:(unsigned long long)a0 style:(unsigned long long)a1;

- (void)p_createComponents;
- (id)p_imageName;
- (void)p_createImageView;
- (id)initWithType:(unsigned long long)a0 style:(unsigned long long)a1;
- (void)p_defaultLayout;
- (id)p_imageNameForAudio;
- (id)p_imageNameForVideo;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
