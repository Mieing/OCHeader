@class NSString;

@interface AWEDanamkuSettingsViewOptionCellConfigModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL banBottomLine;
@property (nonatomic) BOOL showDescButton;
@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) BOOL defaultSwitchValue;
@property (nonatomic) BOOL banRightArrow;
@property (nonatomic) BOOL enableHighlight;
@property (copy, nonatomic) id /* block */ cellClickBlock;
@property (copy, nonatomic) id /* block */ descButtonClickBlock;
@property (copy, nonatomic) id /* block */ changeMaskSwitch;
@property (nonatomic) unsigned long long themeColorType;

- (void).cxx_destruct;

@end
