@class NSString, UIColor, UIImage;

@interface BDPreviewHashConfig : NSObject

@property (nonatomic) unsigned long long previewHashType;
@property (nonatomic) unsigned long long previewHashDisplayType;
@property (copy, nonatomic) NSString *metaDataBase64String;
@property (copy, nonatomic) NSString *imagePartDataBase64String;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) double blurRadius;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) int tintBlendMode;
@property (nonatomic) double saturation;
@property (retain, nonatomic) UIImage *maskImage;

- (void).cxx_destruct;
- (id)init;

@end
