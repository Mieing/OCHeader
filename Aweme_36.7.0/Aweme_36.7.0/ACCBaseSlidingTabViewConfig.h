@class UIColor, NSArray;

@interface ACCBaseSlidingTabViewConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textSelectedColor;
@property (retain, nonatomic) UIColor *textUnselectedColor;
@property (nonatomic) double tabBarHeight;
@property (nonatomic) double tabBarMaxWidth;
@property (retain, nonatomic) NSArray *tabBarTitles;
@property (retain, nonatomic) NSArray *tabBarViewControllers;
@property (nonatomic) long long tabBarButtonStyle;
@property (nonatomic) long long defaultIndex;
@property (nonatomic) BOOL shouldShowTopLine;
@property (nonatomic) BOOL shouldShowBottomLine;
@property (nonatomic) BOOL shouldShowSelectionLine;
@property (nonatomic) struct CGSize { double width; double height; } selectionLineSize;
@property (nonatomic) double selectionLineBottomOffset;
@property (nonatomic) BOOL selectionLineSizeScrollFix;
@property (nonatomic) double selectionLineCornerRadius;
@property (nonatomic) double gapBetweenTabAndList;

- (void).cxx_destruct;
- (id)init;

@end
