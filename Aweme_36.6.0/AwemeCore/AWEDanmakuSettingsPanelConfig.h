@interface AWEDanmakuSettingsPanelConfig : NSObject

@property (nonatomic) BOOL showSmartMode;
@property (nonatomic) BOOL filterDanmakuSwitch;
@property (nonatomic) BOOL shouldShowDanmakuManager;
@property (nonatomic) BOOL enableHighlightGlobalVideoCloseSwitch;
@property (nonatomic) unsigned long long themeColorType;

+ (double)bigFontModeEnlarge:(double)a0;
+ (id)textFont:(double)a0 weight:(long long)a1 fontName:(id)a2;
+ (long long)numberSections;
+ (id)sliderThemColor:(BOOL)a0;

@end
