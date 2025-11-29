@class NSString, NSURL;

@interface BDXCategoryImageCellModel : BDXCategoryIndicatorCellModel

@property (copy, nonatomic) id /* block */ loadImageCallback;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *selectedImageName;
@property (retain, nonatomic) NSURL *selectedImageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic, getter=isImageZoomEnabled) BOOL imageZoomEnabled;
@property (nonatomic) double imageZoomScale;

- (void).cxx_destruct;

@end
