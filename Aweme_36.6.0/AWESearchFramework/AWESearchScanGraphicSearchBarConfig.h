@class UIColor, NSString, NSArray, UIImage;

@interface AWESearchScanGraphicSearchBarConfig : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL supportDarkTheme;
@property (copy, nonatomic) NSString *popoverToken;
@property (nonatomic) BOOL supportPopover;
@property (copy, nonatomic) NSString *placeHolder;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *gradientColor;
@property (nonatomic) BOOL pureText;
@property (nonatomic) BOOL disableClearGraphicBlock;

- (void).cxx_destruct;
- (id)init;

@end
