@class UIImage, UIFont, UIColor;

@interface AWEBarPanelDetailBottomUIConfig : NSObject

@property (nonatomic) long long style;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double barHeight;
@property (nonatomic) double barBottomOffset;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) double iconLeft;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconCenterYOffset;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentTextColor;
@property (nonatomic) double contentLeftToIconMargin;
@property (nonatomic) double contentCenterYOffset;
@property (nonatomic) double contentRightToArrowMargin;
@property (retain, nonatomic) UIImage *arrow;
@property (nonatomic) double arrowRightMargin;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) double arrowCenterYOffset;

+ (id)defaultWatchLaterConfig;

- (void).cxx_destruct;
- (id)init;

@end
