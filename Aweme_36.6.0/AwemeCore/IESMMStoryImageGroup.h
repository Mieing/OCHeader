@class UIImage, HTSGLPicture;

@interface IESMMStoryImageGroup : HTSGLFilterGroup

@property (retain, nonatomic) HTSGLPicture *sourceImageFilter;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } storyImageSize;

- (id)initWithImage:(id)a0 backVideoSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (void)reprocessSourceImage;
- (void).cxx_destruct;

@end
