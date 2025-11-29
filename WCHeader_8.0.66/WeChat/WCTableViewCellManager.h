@class UIColor, WCTableViewCellBaseConfig, UITableViewCell, UIBezierPath, NSArray, NSObject;

@interface WCTableViewCellManager : NSObject

@property (retain, nonatomic) WCTableViewCellBaseConfig *cellConfig;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL isNeedFixWidthAndAdjustFont;
@property (nonatomic) BOOL bNeedRemoveSystemSeperateLine;
@property (nonatomic) BOOL bNeedSeperateLine;
@property (nonatomic) BOOL bSeperateLineBackToSide;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *cellBackgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (weak, nonatomic) UITableViewCell *cell;
@property (nonatomic) double fCellHeight;
@property (retain, nonatomic) UIBezierPath *cornerPath;
@property (nonatomic) double fSeperateLineLeftInset;
@property (nonatomic) unsigned long long seperateLineMode;
@property (nonatomic) double fSeperateLineRightInset;
@property (retain, nonatomic) UIColor *fSeperateLineColor;
@property (copy, nonatomic) NSArray *customRowAction;
@property (retain, nonatomic) NSObject *eventHandler;
@property (retain, nonatomic) Class cellCustomizedCellType;

+ (id)centerCellForSel:(SEL)a0 target:(id)a1 title:(id)a2;
+ (id)centerCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 detail:(id)a3;
+ (id)normalCellForTitle:(id)a0;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 titleColor:(id)a3 leftImage:(id)a4 withRightRedDot:(BOOL)a5;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 detail:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 pathKey:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 badge:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 badge:(id)a3 pathKey:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 withRightRedDot:(BOOL)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 pathKey:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 pathKey:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 badge:(id)a3 rightValue:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 canRightValueCopy:(BOOL)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightValue:(id)a3 rightImage:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 leftBadge:(id)a3 rightView:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 rightView:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 customView:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 rightView:(id)a3;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 badge:(id)a4 rightValue:(id)a5 rightImage:(id)a6 withRightRedDot:(BOOL)a7 selected:(BOOL)a8;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 badge:(id)a4 rightValue:(id)a5 rightImage:(id)a6 withRightRedDot:(BOOL)a7 selected:(BOOL)a8 pathKey:(id)a9;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 titleColor:(id)a4 badge:(id)a5 rightValue:(id)a6 rightImage:(id)a7 withRightRedDot:(BOOL)a8 selected:(BOOL)a9;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 titleColor:(id)a4 badge:(id)a5 rightValue:(id)a6 rightImage:(id)a7 withRightRedDot:(BOOL)a8 selected:(BOOL)a9 pathKey:(id)a10;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 titleColor:(id)a4 badge:(id)a5 rightValue:(id)a6 rightColor:(id)a7 withRightRedDot:(BOOL)a8 selected:(BOOL)a9;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 badge:(id)a4 rightValue:(id)a5 rightImageUrl:(id)a6 withRightRedDot:(BOOL)a7 selected:(BOOL)a8 pathKey:(id)a9;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 badge:(id)a4;
+ (id)normalCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 badge:(id)a4 pathKey:(id)a5;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 title:(id)a2 on:(BOOL)a3;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 on:(BOOL)a4;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 title:(id)a3 desc:(id)a4 on:(BOOL)a5;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 leftMargin:(double)a3 title:(id)a4 desc:(id)a5 on:(BOOL)a6;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 leftImage:(id)a2 leftMargin:(double)a3 title:(id)a4 desc:(id)a5 on:(BOOL)a6 disable:(BOOL)a7;
+ (id)switchCellForSel:(SEL)a0 target:(id)a1 customView:(id)a2 on:(BOOL)a3;
+ (id)loadingCell;
+ (id)cellForMakeSel:(SEL)a0 makeTarget:(id)a1 actionSel:(SEL)a2 actionTarget:(id)a3 height:(double)a4 userInfo:(id)a5;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void)drawCell:(id)a0;
- (void)clearCell:(id)a0;
- (void)configureCell:(id)a0;
- (void)setNotStretchCellHeight:(double)a0;
- (double)cellHeightFor:(id)a0;
- (double)cellSeparatorLeftInset;
- (double)cellSeperateLineRightInset;
- (void)didBeClickedAt:(id)a0;
- (void)willDisplayAt:(id)a0;
- (long long)systemSelectionStyle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
