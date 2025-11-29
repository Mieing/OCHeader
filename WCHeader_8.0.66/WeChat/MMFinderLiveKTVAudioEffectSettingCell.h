@class UICollectionView, MMUIView, UISlider, MMFinderLiveKTVAudioEffectSettingUserInfo, MMUILabel;

@interface MMFinderLiveKTVAudioEffectSettingCell : WCTableViewNormalCellManager

@property (retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UICollectionView *reverbCollectionView;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 userInfo:(id)a1;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)a0 height:(double)a1;
- (void)initSliderValue;
- (void)sliderValueChanged:(id)a0;
- (void)layoutUI;
- (id)liveTask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSliderDotArea;
- (void).cxx_destruct;

@end
