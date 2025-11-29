@class UIColor, UIFont;

@interface IESIMGroupRecommendGroupCellConfiguration : NSObject <IESIMGroupRecommendCellConfigurationProtocol>

@property (nonatomic) struct CGSize { double x0; double x1; } avatarSize;
@property (nonatomic) double avatarTopPadding;
@property (nonatomic) double avatarLeadingPadding;
@property (nonatomic) double textLeadingPadding;
@property (nonatomic) double textTrailingPadding;
@property (nonatomic) double textLineSpacing;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) UIColor *nameColor;
@property (nonatomic, retain) UIFont *descFont;
@property (nonatomic, retain) UIColor *descColor;
@property (nonatomic, retain) UIFont *tagFont;
@property (nonatomic, retain) UIColor *tagColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tagInnerPadding;
@property (nonatomic) double tagCornerRadius;
@property (nonatomic, retain) UIColor *tagBackgroundColor;
@property (nonatomic, retain) UIFont *buttonLabelFont;
@property (nonatomic) struct CGSize { double x0; double x1; } buttonSize;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) double buttonTrailingPadding;

- (void).cxx_destruct;
- (id)init;

@end
