@class NSString, UIImageView, WCFinderSimplePlayerView, UIView, VoipRecentStatusFadeView;

@interface VoipRecentStatusFinderVideoView : UIView <VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol>

@property (retain, nonatomic) WCFinderSimplePlayerView *contentsView;
@property (retain, nonatomic) UIView *soundView;
@property (retain, nonatomic) UIImageView *soundIconImageView;
@property (retain, nonatomic) VoipRecentStatusFadeView *topFadeView;
@property (retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView;
@property (copy, nonatomic) id /* block */ didClickSoundButtonCallback;
@property (nonatomic) BOOL isSoundBtnHidden;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWCFinderDataItem:(id)a0;
- (void)layoutSubviews;
- (void)onSilenceViewClickWithSender:(id)a0;
- (void)onTerminate;
- (void).cxx_destruct;

@end
