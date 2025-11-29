@class UIColor, UIFont;

@interface MMFinderLiveWidgetCommon : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } bigSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } normalSize;
@property (class, readonly, nonatomic) double normalCornerRadius;
@property (class, readonly, nonatomic) double textBottomToEdge;
@property (class, readonly, nonatomic) UIFont *normalStyleTextFont;
@property (class, readonly, nonatomic) UIColor *normalStyleTextColor;
@property (class, readonly, nonatomic) UIColor *normalStyleBackgroundColor;

@end
