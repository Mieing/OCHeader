@class NSString, AWEDanmakuSettingsSliderView, AWEDanmakuSettingsConfigModel, UILabel, UIView;

@interface AWEDanmakuSettingsSliderViewCell : UITableViewCell <AWEDanmakuSettingsSliderDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWEDanmakuSettingsSliderView *slider;
@property (retain, nonatomic) AWEDanmakuSettingsConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUI:(unsigned long long)a0;
- (void)updateWithConfigModel:(id)a0 scene:(unsigned long long)a1;
- (void)didSlideOnPointIndex:(long long)a0 needUpdate:(BOOL)a1;
- (void)didSlideOnValuePercent:(double)a0 needUpdate:(BOOL)a1;
- (void)touchingSlider:(BOOL)a0;
- (void)setupConfigModel:(id)a0;
- (void)configSlider;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isDarkMode;

@end
