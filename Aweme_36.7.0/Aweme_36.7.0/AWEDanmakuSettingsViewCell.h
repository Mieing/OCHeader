@class NSString, AWEDanmakuSettingsConfigModel, UILabel, AWEDanmakuSettingsSlider, UIView;

@interface AWEDanmakuSettingsViewCell : UITableViewCell <AWEDanmakuSettingsSliderDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWEDanmakuSettingsSlider *slider;
@property (retain, nonatomic) AWEDanmakuSettingsConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setupUI:(unsigned long long)a0;
- (void)updateWithConfigModel:(id)a0 scene:(unsigned long long)a1;
- (void)didSlideOnPointIndex:(long long)a0 needUpdate:(BOOL)a1;
- (void)didSlideOnValuePercent:(double)a0 needUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
