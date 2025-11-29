@class NSMutableArray;

@interface ProfileSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int blockFinder;
@property (retain, nonatomic) NSMutableArray *settingWording;

+ (void)initialize;

- (void)setSettingWording:(id)a0;
- (id)settingWording;
- (void)setBlockFinder:(unsigned int)a0;
- (unsigned int)blockFinder;

@end
