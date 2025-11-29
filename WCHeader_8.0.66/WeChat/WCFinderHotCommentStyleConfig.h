@class UIColor;

@interface WCFinderHotCommentStyleConfig : NSObject

@property (nonatomic) double containerHorMargin;
@property (nonatomic) double contentHorPadding;
@property (nonatomic) double contentVerPadding;
@property (nonatomic) double hotwordLabelTrailing;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) UIColor *hotwordLabelBackgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *textShadowColor;
@property (retain, nonatomic) UIColor *hotwordLabelTextColor;
@property (nonatomic) BOOL containerMasksToBounds;

- (void).cxx_destruct;

@end
