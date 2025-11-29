@class NSString, UIImage, AWEECOMIMBaseMsgModel;

@interface AWEECOMIMImageItemModel : NSObject

@property (copy, nonatomic) NSString *thumbnailImgURLString;
@property (copy, nonatomic) NSString *originalImgURLString;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *sourceLocalPath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long sharkState;
@property (weak, nonatomic) AWEECOMIMBaseMsgModel *msgModel;

+ (struct CGSize { double x0; double x1; })imageSizeWithModel:(id)a0;

- (void).cxx_destruct;

@end
