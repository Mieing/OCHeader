@class UIImage, SkityImage, NSString;

@interface AWEDanmakuItemPrefixImageInfo : NSObject

@property (retain, nonatomic) UIImage *prefixImage;
@property (retain, nonatomic) SkityImage *prefixSkityImage;
@property (copy, nonatomic) NSString *prefixImageName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } prefixImageframe;
@property (nonatomic) struct CGSize { double width; double height; } prefixImageSize;

- (void).cxx_destruct;

@end
