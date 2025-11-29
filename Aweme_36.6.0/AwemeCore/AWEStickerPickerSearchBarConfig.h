@class UIColor, UIImage;

@interface AWEStickerPickerSearchBarConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIImage *lensImage;
@property (retain, nonatomic) UIImage *clearImage;
@property (nonatomic) double searchBarHeight;
@property (retain, nonatomic) UIColor *lensImageTintColor;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)init;

@end
