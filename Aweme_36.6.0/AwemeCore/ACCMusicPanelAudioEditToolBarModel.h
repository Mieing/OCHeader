@class NSString;

@interface ACCMusicPanelAudioEditToolBarModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *disableTitle;
@property (copy, nonatomic) NSString *normalIconName;
@property (copy, nonatomic) NSString *selectedIconName;
@property (copy, nonatomic) NSString *disableIconName;
@property (copy, nonatomic) NSString *disableTitleColor;
@property (nonatomic) double disableIconAlpha;
@property (copy, nonatomic) NSString *darkThemeDisableTitleColor;
@property (copy, nonatomic) NSString *normalAccessibilityText;
@property (copy, nonatomic) NSString *selectedAccessibilityText;
@property (copy, nonatomic) NSString *disableAccessibilityText;
@property (nonatomic) BOOL shouldAdjustStyleWhenSelected;
@property (nonatomic) BOOL shouldAdjustStyleWhenDisable;
@property (nonatomic) unsigned long long toolBarType;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isDarkTheme;

+ (id)audioEditToolBarTypeString:(unsigned long long)a0;

- (id)currentIconImage;
- (id)toolBarColor;
- (id)disableToolBarColor;
- (id)currentAccessibilityText;
- (id)getResourceImage:(id)a0;
- (id)audioEditToolBarTypeString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currentTitle;

@end
