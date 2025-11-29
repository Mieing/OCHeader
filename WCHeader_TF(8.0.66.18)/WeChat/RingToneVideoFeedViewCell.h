@class UIView, NSString, WCFinderFeedContentVM, RingToneDetail, UIImageView, RingToneFinderPlayerView, CAGradientLayer, MMUILabel, MMUIButton;
@protocol RingToneVideoFeedViewCellDelegate;

@interface RingToneVideoFeedViewCell : UICollectionViewCell <WCAudioSessionExt, RingTonePlayerExt, RingBackInfoDisplaySheetViewDelegate>

@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) WCFinderFeedContentVM *feedContentVM;
@property (retain, nonatomic) RingToneFinderPlayerView *finderPlayerView;
@property (retain, nonatomic) MMUIButton *doneBtn;
@property (retain, nonatomic) UIImageView *ringIconView;
@property (retain, nonatomic) UIImageView *musicDancingView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *settingsLabel;
@property (nonatomic) unsigned long long settingNum;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) MMUIButton *tingBtn;
@property (weak, nonatomic) id<RingToneVideoFeedViewCellDelegate> delegate;
@property (nonatomic) BOOL isCurrentPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;
+ (double)cellHeightWith:(id)a0 width:(double)a1 ring:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerExtForVC:(unsigned long long)a0;
- (void)initSubView;
- (void)updateContentWithRingDetail:(id)a0 vm:(id)a1 playFirstRing:(BOOL)a2 friendName:(id)a3;
- (void)changeDataSource:(id)a0 currentIndex:(long long)a1 useThumb:(id)a2 startPlayTime:(double)a3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBlurAlpha:(double)a0;
- (void)_triggerAntiAddictCheckLogic;
- (void)playWithSound:(BOOL)a0;
- (void)stopPlaySound:(BOOL)a0;
- (void)setDancingViewOn:(BOOL)a0;
- (double)getCurrentPlayTime;
- (void)onSelectRing:(id)a0;
- (void)onJumpToTingInfoPage:(id)a0;
- (void)onRingToneSheetDisappear;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
