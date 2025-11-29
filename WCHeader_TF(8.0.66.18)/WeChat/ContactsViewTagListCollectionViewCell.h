@class UIColor, UIFont, NSString, NSNumber;

@interface ContactsViewTagListCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL isChosen;
@property (nonatomic) double tagViewCornerRadius;
@property (retain, nonatomic) UIColor *tagButtonTextColor;
@property (retain, nonatomic) UIFont *tagButtonTextFont;
@property (retain, nonatomic) NSNumber *tagImageType;
@property (retain, nonatomic) NSString *createTagSpecifyName;

+ (id)getCreateTagCellTitle:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)makeCell:(id)a0;
- (void)makeCreateTagCell:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
