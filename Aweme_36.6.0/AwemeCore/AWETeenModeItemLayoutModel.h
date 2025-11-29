@class UIImage, NSString;

@interface AWETeenModeItemLayoutModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) NSString *defaultImageName;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long titleFontClass;
@property (nonatomic) double imageHeight;
@property (nonatomic) double spacing;
@property (nonatomic) long long layoutType;

- (void).cxx_destruct;

@end
