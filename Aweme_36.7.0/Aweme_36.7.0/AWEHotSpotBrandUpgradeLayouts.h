@class UIFont;

@interface AWEHotSpotBrandUpgradeLayouts : NSObject

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconLeftWidth;
@property (nonatomic) double gradientLeftPadding;
@property (nonatomic) double gradientRightPadding;
@property (nonatomic) double chineseAndTopDistance;
@property (nonatomic) double TopAndXDistance;
@property (nonatomic) double chineseAndArrowDistance;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double topXFrameY;
@property (nonatomic) double chineseFrameY;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UIFont *chineseFont;
@property (retain, nonatomic) UIFont *topXFont;
@property (nonatomic) BOOL hasPreferredThemeStyle;
@property (nonatomic) long long preferredThemeStyle;

- (void)updateLayoutWithBoardTabModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
