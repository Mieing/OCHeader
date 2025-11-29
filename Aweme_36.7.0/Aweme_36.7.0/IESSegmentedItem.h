@class IESSegmentedItemLayoutInfo, NSString, UIColor, UIImage, NSDictionary;

@interface IESSegmentedItem : NSObject

@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSelectedTitle;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) UIImage *itemSelectedImage;
@property (retain, nonatomic) IESSegmentedItemLayoutInfo *layoutInfo;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *selectedTextAttributes;
@property (copy, nonatomic) id /* block */ imageClickBlock;
@property (copy, nonatomic) id /* block */ accessibilityTextBlock;

+ (id)itemWithTitle:(id)a0 selectedTitle:(id)a1;
+ (id)itemWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2;
+ (id)itemWithTitle:(id)a0 selectedTitle:(id)a1 image:(id)a2 selectedImage:(id)a3;
+ (id)itemWithImage:(id)a0 selectedImage:(id)a1;
+ (id)itemWithTitle:(id)a0;

- (id)updatedTitleColorStringWithProgress:(double)a0 unitProgress:(double)a1 currentIndexProgress:(double)a2 isSelected:(BOOL)a3;
- (struct CGSize { double x0; double x1; })calculatedTextDynamicSize:(id)a0 titleAttributes:(id)a1;
- (id)updatedTitleColorWithCurrentColor:(id)a0 targetColor:(id)a1 currentIndexProgress:(double)a2 progress:(double)a3 unitProgress:(double)a4;
- (void).cxx_destruct;
- (id)init;

@end
