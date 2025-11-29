@class UIImage, NSString;

@interface AWEIMMixPhotoAIModelInfoModel : NSObject

@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *trailingImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ onTap;

- (void).cxx_destruct;

@end
