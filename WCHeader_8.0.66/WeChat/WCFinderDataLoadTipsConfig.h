@class UIColor, UIFont;

@interface WCFinderDataLoadTipsConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } loadingIconSize;
@property (retain, nonatomic) UIFont *tipsFont;
@property (retain, nonatomic) UIColor *tipsColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
