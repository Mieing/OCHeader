@class UIColor, UIFont;

@interface IESGCPDetailFilterConfig : NSObject

@property (retain, nonatomic) UIColor *filterViewBackgroundColor;
@property (retain, nonatomic) UIColor *filterCollectionViewBackgroundColor;
@property (nonatomic) double filterCollectionViewHeight;
@property (nonatomic) double filterCellSpace;
@property (nonatomic) double filterCellTopSpace;
@property (nonatomic) double filterCellLeftSpace;
@property (nonatomic) BOOL isMultipleSelection;
@property (nonatomic) BOOL needFadeOut;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelInsets;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double filterCellCornerRadius;
@property (nonatomic) double filterCellBorderWidth;
@property (retain, nonatomic) UIColor *filterCellSelectedBorderColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedBorderColor;
@property (retain, nonatomic) UIColor *filterCellSelectedTextColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedTextColor;
@property (retain, nonatomic) UIFont *filterCellSelectedTextFont;
@property (retain, nonatomic) UIFont *filterCellUnselectedTextFont;
@property (retain, nonatomic) UIColor *filterCellSelectedBackgroundColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedBackgroundColor;

- (void).cxx_destruct;
- (id)init;

@end
