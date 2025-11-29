@class UIColor, UIFont;

@interface AWEScrollNumberViewConfig : NSObject

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long maxRowNumber;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
