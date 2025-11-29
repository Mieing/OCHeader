@class WCFinderAnimationLoadingView, UIImageView, UILabel, WCFinderMinimizeFloatingAudioOnlyView;

@interface WCFinderMinimizeFloatingStateView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) WCFinderMinimizeFloatingAudioOnlyView *audioOnlyView;
@property (nonatomic) double scaleFactor;
@property (nonatomic) long long state;
@property (nonatomic) long long playType;

- (id)init;
- (void)updateUI;
- (void)layoutSubviews;
- (void)switchPlayType;
- (void)zoomAnimeProgress:(double)a0;
- (void)zoomRecover;
- (void).cxx_destruct;

@end
