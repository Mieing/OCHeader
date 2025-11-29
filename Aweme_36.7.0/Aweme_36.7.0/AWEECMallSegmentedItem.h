@class AWEECMallSegmentedItemLayout, NSString, UIColor, NSDictionary;

@interface AWEECMallSegmentedItem : NSObject

@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemSelectedTitle;
@property (retain, nonatomic) AWEECMallSegmentedItemLayout *layoutInfo;
@property (copy, nonatomic) NSString *uniqID;
@property (nonatomic) BOOL isStickTab;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (retain, nonatomic) UIColor *indicatorDarkColor;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *selectedTextAttributes;
@property (copy, nonatomic) NSDictionary *textDarkAttributes;
@property (copy, nonatomic) NSDictionary *selectedTextDarkAttributes;
@property (copy, nonatomic) id /* block */ accessibilityTextBlock;
@property (nonatomic) BOOL needShowAnchorView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) NSString *itemImage;
@property (copy, nonatomic) NSString *itemSelectedImage;
@property (copy, nonatomic) NSString *itemDarkImage;
@property (copy, nonatomic) NSString *itemSelectedDarkImage;
@property (nonatomic) BOOL needResControlLottie;
@property (nonatomic) BOOL isDisplay;
@property (nonatomic) long long carouselTimes;
@property (nonatomic) long long playedTimes;
@property (nonatomic) long long showedAnimation;
@property (nonatomic) BOOL isCheckedBefore;
@property (nonatomic) struct CGSize { double width; double height; } lottieSize;
@property (copy, nonatomic) NSString *lottie;
@property (copy, nonatomic) NSString *selectedLottie;
@property (copy, nonatomic) NSString *darkLottie;
@property (copy, nonatomic) NSString *selectedDarkLottie;
@property (nonatomic) BOOL isCustomizedTheme;
@property (nonatomic) BOOL isLightTheme;
@property (nonatomic) BOOL needShowReddot;
@property (nonatomic) BOOL showedAnchorView;

+ (id)itemWithTitle:(id)a0 selectedTitle:(id)a1;
+ (id)itemWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2;
+ (id)itemWithTitle:(id)a0 selectedTitle:(id)a1 image:(id)a2 selectedImage:(id)a3;
+ (id)itemWithLottie:(id)a0 selectedLottie:(id)a1 placeholderTitle:(id)a2 lottieSize:(struct CGSize { double x0; double x1; })a3;
+ (id)itemWithImage:(id)a0 selectedImage:(id)a1 placeholderTitle:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (id)itemWithTitle:(id)a0;

- (id)updatedTitleColorStringWithProgress:(double)a0 unitProgress:(double)a1 currentIndexProgress:(double)a2 isSelected:(BOOL)a3;
- (struct CGSize { double x0; double x1; })calculatedTextDynamicSize:(id)a0 titleAttributes:(id)a1;
- (id)updatedTitleColorWithCurrentColor:(id)a0 targetColor:(id)a1 currentIndexProgress:(double)a2 progress:(double)a3 unitProgress:(double)a4;
- (void).cxx_destruct;
- (id)init;

@end
