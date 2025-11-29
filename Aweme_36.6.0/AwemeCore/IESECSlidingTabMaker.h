@class NSString, NSArray, UIImage, NSAttributedString;

@interface IESECSlidingTabMaker : NSObject <IESECSlidingTabConvertible>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *selectedColor;
@property (copy, nonatomic) NSString *unselectedColor;
@property (copy, nonatomic) NSString *selectedAccessibilityLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *redDotViewBgColor;
@property (nonatomic) unsigned long long badgeImagePosition;
@property (copy, nonatomic) NSArray *badgeImageURLArray;
@property (copy, nonatomic) NSAttributedString *badgeLabelAttributedText;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *selectedAttributedTitle;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedIconSize;
@property (copy, nonatomic) NSString *badgeMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iesec_tabSelectedAccessibilityLabel;
- (id)iesec_tabAttributedTitle;
- (struct CGSize { double x0; double x1; })iesec_iconSize;
- (struct CGSize { double x0; double x1; })iesec_selectedIconSize;
- (id)iesec_tabTitle;
- (id)iesec_tabImage;
- (id)iesec_unSelectedColor;
- (id)iesec_tabSelectedAttributedTitle;
- (id)iesec_tabSelectedTitle;
- (id)iesec_tabSelectedImage;
- (id)iesec_selectedColor;
- (id)iesec_redDotViewBgColor;
- (void).cxx_destruct;

@end
