@class NSString, UIImage, MMDynamicColor;

@interface KindaImage : NSObject <MMKImage>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL supportDynamicSize;
@property (retain, nonatomic) NSString *darkModeUrl;
@property (nonatomic) float inputWidth;
@property (nonatomic) float inputHeight;
@property (retain, nonatomic) MMDynamicColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)getSupportDynamicSize;
- (void)setSvgUrl:(id)a0 color:(id)a1;
- (id)getUrl;
- (float)getWidth;
- (float)getHeight;
- (void)stretchImage:(float)a0 topCap:(float)a1;
- (void)setSvgUrl:(id)a0 color:(id)a1 size:(id)a2;
- (id)getReplacedTokenUrl:(id)a0;
- (id)getImage;
- (void).cxx_destruct;

@end
