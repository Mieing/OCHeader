@class UIButton, UIView;

@interface AWEPadBannerLiveStreamCardCell : AWEPadPolymericChannelBannerCardCell

@property (weak, nonatomic) UIView *liveStreamView;
@property (weak, nonatomic) UIButton *volumeSwitchBtn;
@property (weak, nonatomic) UIView *tagView;

- (void)removeLiveStreamViewIfNeeded;
- (void)addLiveStreamView:(id)a0 volumeSwitchBtn:(id)a1;
- (void)updateTagView:(id)a0;
- (void)bringCoverImageViewToFront:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
