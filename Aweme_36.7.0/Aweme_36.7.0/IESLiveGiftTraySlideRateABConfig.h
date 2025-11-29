@class IESLiveGiftTraySlideRateConfig;

@interface IESLiveGiftTraySlideRateABConfig : NSObject

@property (retain, nonatomic) IESLiveGiftTraySlideRateConfig *config;

- (id)initWithDIContext:(id)a0;
- (BOOL)useSettingRate;
- (double)traySlideRateForHotInfo:(id)a0 price:(long long)a1;
- (void).cxx_destruct;

@end
