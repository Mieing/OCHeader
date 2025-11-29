@class UIImageView, AWEGeneralWaterfallAdConvertView, NSString;

@interface AWEGeneralWaterfallAdVideoCellController : AWEGeneralWaterfallVideoCellController <AWESearchVideoViewPlayerDelegate>

@property (retain, nonatomic) UIImageView *linkIconView;
@property (retain, nonatomic) AWEGeneralWaterfallAdConvertView *adConvertView;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;

- (id)logExtraDict;
- (void)trackShow;
- (void)onTapAvatar:(id)a0;
- (void)onTapNickname:(id)a0;
- (void)onTapDesc:(id)a0;
- (id)getTrackBaseParams;
- (void)onTapNativeAdLearnMoreButton:(id)a0;
- (void)onTapCardBlank:(id)a0;
- (void)onTapVideo:(id)a0;
- (void)onTapUserInfoBlank:(id)a0;
- (void)trackUserSideClickWithEvent:(id)a0 buttonType:(id)a1;
- (void)trackAdSideClickWithlabel:(id)a0 refer:(id)a1;
- (void)diggTapped;
- (void)trackAdSideClickWithlabel:(id)a0 refer:(id)a1 needDuration:(BOOL)a2;
- (id)getAdTrackParamsWithButtonType:(id)a0;
- (void)onTapConvertView:(id)a0;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)didEnd;
- (void)setupUI;
- (void)didStart;
- (void)updateWithModel:(id)a0;
- (void)didPause;

@end
