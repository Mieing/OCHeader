@class UIColor, NSMapTable, NSString, UIImage, NSHashTable;

@interface AFDUpdatableImage : UIImage

@property (retain, nonatomic) UIImage *realImage;
@property (copy, nonatomic) NSHashTable *imageViews;
@property (copy, nonatomic) NSHashTable *highlightedImageViews;
@property (copy, nonatomic) NSMapTable *buttons;
@property (copy, nonatomic) NSMapTable *buttonBackgrounds;
@property (nonatomic) BOOL dynamicTheme;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *cloudPath;
@property (retain, nonatomic) UIColor *themeColor;

- (void)updateImage:(id)a0;
- (void)addToImageView:(id)a0;
- (void)removeFromImageView:(id)a0;
- (void)addToButton:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButton:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButton:(id)a0 forBackgroundState:(unsigned long long)a1;
- (void)addToButton:(id)a0 forBackgroundState:(unsigned long long)a1;
- (void)removeHighlightedImageFromImageView:(id)a0;
- (void)addHighlightedImageToImageView:(id)a0;
- (void).cxx_destruct;

@end
