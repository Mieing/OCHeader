@class AWEThemeChooseTimeModel;

@interface AWESettingThemeManagerModel : NSObject <NSCoding, NSCopying>

@property (nonatomic) BOOL autoChange;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) AWEThemeChooseTimeModel *darkTime;
@property (retain, nonatomic) AWEThemeChooseTimeModel *lightTime;
@property (nonatomic) BOOL lastModeLightEnable;
@property (nonatomic) int lastABValue;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
