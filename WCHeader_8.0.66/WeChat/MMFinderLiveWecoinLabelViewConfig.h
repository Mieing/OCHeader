@class UIColor, UIFont;

@interface MMFinderLiveWecoinLabelViewConfig : NSObject

@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconLabelPadding;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *labelTextColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
