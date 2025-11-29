@class UIImage, NSString;

@interface AWEIMMixPhotoAITaskStateInfoModel : NSObject

@property (retain, nonatomic) UIImage *topImage;
@property (retain, nonatomic) UIImage *leadingImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL showTopDefaultTopImage;
@property (nonatomic) BOOL showDefaultLeadingImage;

- (void).cxx_destruct;

@end
