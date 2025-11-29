@class UIImage, NSAttributedString;

@interface AFDSnackBarHomepageScreenshotBodyViewConfig : NSObject

@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) NSAttributedString *titleAttrString;
@property (retain, nonatomic) NSAttributedString *confirmAttrString;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void).cxx_destruct;

@end
