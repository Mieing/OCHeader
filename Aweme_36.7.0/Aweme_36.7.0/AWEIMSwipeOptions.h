@class UIColor, AWEIMSwipeExpansionStyle;

@interface AWEIMSwipeOptions : NSObject

@property (nonatomic) long long transitionStyle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double maximumButtonWidth;
@property (nonatomic) double minimumButtonWidth;
@property (nonatomic) double buttonPadding;
@property (nonatomic) double buttonSpacing;
@property (retain, nonatomic) AWEIMSwipeExpansionStyle *expansionStyle;

- (void).cxx_destruct;

@end
