@class WCSNSNodeVideoView, UIImageView, VoipRecentStatusFadeView, UIView, NSString;

@interface VoipRecentStatusSNSVideoView : UIView <VoipRecentStatusProperties>

@property (retain, nonatomic) WCSNSNodeVideoView *contentsView;
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

@end
