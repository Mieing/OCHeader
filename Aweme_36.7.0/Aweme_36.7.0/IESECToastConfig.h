@class UIColor, UIFont;

@interface IESECToastConfig : NSObject

@property (nonatomic) long long style;
@property (nonatomic) double maxWidthPercentage;
@property (nonatomic) double maxHeightPercentage;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double middlePadding;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *toastBackgroundColor;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIFont *contentFont;
@property (nonatomic) double showDuration;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) id /* block */ extraConfigBlock;
@property (copy, nonatomic) id /* block */ afterShowBlock;
@property (copy, nonatomic) id /* block */ beforeShowBlock;

- (void).cxx_destruct;
- (id)init;

@end
