@class UIColor, NSString, UIFont, UICollectionViewFlowLayout;

@interface ACCBeautyUIDefaultConfiguration : NSObject <ACCBeautyUIConfigProtocol>

@property (nonatomic) double topBarHeight;
@property (nonatomic) double contentCollectionViewTopOffset;
@property (nonatomic) double contentCollectionViewHeight;
@property (nonatomic) double panelContentHeight;
@property (retain, nonatomic) UIColor *effectCellSelectedBorderColor;
@property (readonly, nonatomic) UICollectionViewFlowLayout *effectItemsCollectionViewLayout;
@property (retain, nonatomic) Class effectItemCellClass;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) BOOL enableBeautyCategorySwitch;
@property (nonatomic) unsigned long long headerStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIFont *tbSelectedTitleFont;
@property (retain, nonatomic) UIFont *tbUnselectedTitleFont;
@property (retain, nonatomic) UIColor *tbSelectedTitleColor;
@property (retain, nonatomic) UIColor *tbUnselectedTitleColor;

+ (double)itemWidth;
+ (double)cellWidth;

- (id)makeNewSlider;
- (void).cxx_destruct;
- (id)init;

@end
