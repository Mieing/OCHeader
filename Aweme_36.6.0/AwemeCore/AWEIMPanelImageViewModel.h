@class UIImage, NSString;

@interface AWEIMPanelImageViewModel : AWEIMPanelViewModel

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageRemoteURLString;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } imageViewSize;
@property (nonatomic) long long alignment;

- (void).cxx_destruct;
- (id)init;

@end
