@class UIColor, NSString, UIImage, NSURL, NSValue;

@interface MMTabbarItem : UITabBarItem

@property (retain, nonatomic) NSString *normalTitle;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *highlightImage;
@property (retain, nonatomic) NSURL *normalImageUrl;
@property (retain, nonatomic) NSURL *normalImageDarkUrl;
@property (retain, nonatomic) NSURL *highlightImageUrl;
@property (retain, nonatomic) NSURL *highlightImageDarkUrl;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSValue *customSize;
@property (nonatomic) long long tabIndex;

- (id)initWithTitle:(id)a0 normalImage:(id)a1 selectedImage:(id)a2;
- (id)initWithTitle:(id)a0 normalImageUrl:(id)a1 normalImageDarkUrL:(id)a2 selectedImageUrl:(id)a3 selectedImageDarkUrl:(id)a4;
- (id)initWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2;
- (void).cxx_destruct;

@end
