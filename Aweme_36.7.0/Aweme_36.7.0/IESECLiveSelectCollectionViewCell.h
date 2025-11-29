@class UIFont, IESECLiveTabBorderView, UIImage, IESECUIImageView, NSArray, UIImageView, UILabel, UIColor;

@interface IESECLiveSelectCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECLiveTabBorderView *borderContainer;
@property (retain, nonatomic) IESECUIImageView *bgImageView;
@property (retain, nonatomic) UILabel *tabNameLabel;
@property (retain, nonatomic) UIImageView *itemImageView;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double height;
@property (nonatomic) struct CGSize { double width; double height; } cornerSize;
@property (retain, nonatomic) UIColor *unSelectedBgColor;
@property (retain, nonatomic) UIColor *selectedBgColor;
@property (retain, nonatomic) UIImage *unSelectedBgImage;
@property (retain, nonatomic) UIImage *selectedBgImage;
@property (retain, nonatomic) UIColor *unSelectedBorderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (nonatomic) BOOL hideBorder;
@property (retain, nonatomic) UIColor *unSelectedTextColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIFont *unSelectedTextFont;
@property (retain, nonatomic) UIFont *selectedTextFont;
@property (nonatomic) long long textType;
@property (retain, nonatomic) NSArray *unSelectedTextColors;
@property (retain, nonatomic) NSArray *selectedTextColors;
@property (nonatomic) BOOL disableCell;

+ (struct CGSize { double x0; double x1; })cellSizeWithTabName:(id)a0 minWidth:(double)a1 maxWidth:(double)a2 padding:(double)a3 height:(double)a4;
+ (struct CGSize { double x0; double x1; })cellSizeWithTabName:(id)a0 font:(id)a1 minWidth:(double)a2 maxWidth:(double)a3 leftPadding:(double)a4 rightPadding:(double)a5 height:(double)a6 image:(id)a7;
+ (id)tabNameFont;
+ (id)identity;

- (void)setItemModel:(id)a0 selected:(BOOL)a1 needDisable:(BOOL)a2;
- (void)setItemModel:(id)a0 selected:(BOOL)a1;
- (void)setTabSelected:(BOOL)a0;
- (void)configTextColors:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
