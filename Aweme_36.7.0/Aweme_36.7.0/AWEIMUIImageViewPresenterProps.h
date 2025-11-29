@class UIColor, NSString, NSArray, UIImage;

@interface AWEIMUIImageViewPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSArray *imageUrlArray;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double roundCornerRatio;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
