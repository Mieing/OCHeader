@class UIColor, UIFont;

@interface IESIMRecentShareCellUIConfig : NSObject

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double bottomBadgeWidth;
@property (retain, nonatomic) UIColor *smallIconBackgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } smallIconSize;

- (void)p_setup;
- (void).cxx_destruct;
- (id)init;

@end
