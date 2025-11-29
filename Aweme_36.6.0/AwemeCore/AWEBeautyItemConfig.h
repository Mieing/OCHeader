@class UIColor, UIFont;

@interface AWEBeautyItemConfig : NSObject

@property (copy, nonatomic) UIColor *nextLevelImageViewSelectedTintColor;
@property (copy, nonatomic) UIColor *rightNextLevelPhotoViewSelectedTintColor;
@property (copy, nonatomic) UIColor *dotIndicatorSelectedBackgroundColor;
@property (copy, nonatomic) UIColor *nextLevelImageViewUnSelectedTintColor;
@property (copy, nonatomic) UIColor *rightNextLevelPhotoViewUnSelectedTintColor;
@property (copy, nonatomic) UIColor *dotIndicatorUnSelectedBackgroundColor;
@property (copy, nonatomic) UIColor *iconBGViewBackgroundColor;
@property (copy, nonatomic) UIFont *titleLabelSelectFont;
@property (copy, nonatomic) UIColor *titleLabelSelectTextColor;
@property (copy, nonatomic) UIFont *titleLabelUnSelectFont;
@property (copy, nonatomic) UIColor *titleLabelUnSelectTextColor;
@property (nonatomic) double grayedOutAlpha;
@property (nonatomic) double defaultAlpha;

- (void).cxx_destruct;
- (id)init;

@end
