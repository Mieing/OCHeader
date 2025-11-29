@class AWEBeautyPanelConfig, AWEBeautyItemConfig, AWEBeautySliderConfig;

@interface AWEBeautyViewConfig : NSObject

@property (retain, nonatomic) AWEBeautyItemConfig *itemConfig;
@property (retain, nonatomic) AWEBeautyPanelConfig *panelConfig;
@property (retain, nonatomic) AWEBeautySliderConfig *sliderConfig;

- (void).cxx_destruct;
- (id)init;

@end
