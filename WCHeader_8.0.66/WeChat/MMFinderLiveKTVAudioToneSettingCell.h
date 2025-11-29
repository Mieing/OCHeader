@class MMUIButton, MMUIView, MMFinderLiveKTVAudioEffectSettingUserInfo, MMUILabel;

@interface MMFinderLiveKTVAudioToneSettingCell : WCTableViewNormalCellManager

@property (retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *minusBtn;
@property (retain, nonatomic) MMUIButton *plusBtn;
@property (retain, nonatomic) MMUILabel *valueLabel;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 userInfo:(id)a1;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)a0 height:(double)a1;
- (void)initToneValue;
- (void)layoutUI;
- (id)liveTask;
- (void)onMinusButtonTapped:(id)a0;
- (void)onPlusButtonTapped:(id)a0;
- (void).cxx_destruct;

@end
