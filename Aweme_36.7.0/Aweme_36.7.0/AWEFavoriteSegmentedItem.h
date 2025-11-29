@class NSString, NSDictionary, UIImage, AWEFavoriteSegmentedItemLayoutInfo;

@interface AWEFavoriteSegmentedItem : IESSegmentedItem

@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSelectedTitle;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) UIImage *itemSelectedImage;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *selectedTextAttributes;
@property (retain, nonatomic) AWEFavoriteSegmentedItemLayoutInfo *layoutInfo;

+ (id)itemWithTitle:(id)a0 selectedTitle:(id)a1 image:(id)a2 selectedImage:(id)a3 layoutInfo:(id)a4;
+ (id)itemWithTitle:(id)a0 layoutInfo:(id)a1;
+ (id)itemWithTitle:(id)a0 image:(id)a1 layoutInfo:(id)a2;

- (struct CGSize { double x0; double x1; })calculatedTextDynamicSize:(id)a0 titleAttributes:(id)a1;
- (void)updateItemWithTitle:(id)a0 selectedTitle:(id)a1 image:(id)a2 selectedImage:(id)a3;

@end
