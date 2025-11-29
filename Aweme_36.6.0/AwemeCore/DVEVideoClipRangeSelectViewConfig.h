@class UIColor, NSShadow;

@interface DVEVideoClipRangeSelectViewConfig : NSObject

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *innerColor;
@property (nonatomic) BOOL showTips;
@property (nonatomic) BOOL showMaskView;
@property (nonatomic) BOOL showDuration;
@property (nonatomic) BOOL newRectViewStyle;
@property (nonatomic) BOOL curViewBorderHidden;
@property (retain, nonatomic) NSShadow *curViewShadow;
@property (nonatomic) double segmentViewRadius;

+ (id)upgradeConfig;

- (void).cxx_destruct;

@end
