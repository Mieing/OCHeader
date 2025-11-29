@class AWEBasicModeAwemeMusicInfoView, NSString;

@interface AWEBasicModeMusicInfoElement : AWEBasicModeFakeElement

@property (retain, nonatomic) AWEBasicModeAwemeMusicInfoView *musicInfoView;
@property (retain, nonatomic) NSString *musicLabelString;
@property (nonatomic) double bottomOffset;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)p_setup;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)updateMusicInfoView;
- (void)p_layoutMusicInfoViewWithModel:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
