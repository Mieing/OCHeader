@class NSString, UIImageView, UIImage, UIScrollView;

@interface IESGCPImagePreviewCellModel : NSObject

@property (readonly, nonatomic) NSString *urlStr;
@property (readonly, nonatomic) UIImage *localImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGSize { double width; double height; } smallImageSize;
@property (weak, nonatomic) UIImageView *smallImageView;
@property (nonatomic) struct CGSize { double width; double height; } bigImageSize;
@property (weak, nonatomic) UIImageView *bigImageView;
@property (weak, nonatomic) UIScrollView *bigScrollView;

- (id)initWithUrlStr:(id)a0;
- (id)initWithLocalImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smallImageViewframeOriginWindow;
- (id)getCurrentImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewframeShowWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigImageViewFrameOnScrollView;
- (void).cxx_destruct;

@end
