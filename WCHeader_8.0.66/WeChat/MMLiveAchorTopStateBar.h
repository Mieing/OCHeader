@class NSString, UIImageView, MMTimerLabel, MMUILabel;
@protocol MMLiveAchorTopStateBarDelegate;

@interface MMLiveAchorTopStateBar : MMLiveBaseComponentView

@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long roleType;
@property (nonatomic) long long currentNetWorkState;
@property (nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) UIImageView *networkStateImageView;
@property (retain, nonatomic) MMTimerLabel *timerLabel;
@property (readonly, nonatomic) UIImageView *likedImageView;
@property (readonly, nonatomic) MMUILabel *likedCountLabel;
@property (weak, nonatomic) id<MMLiveAchorTopStateBarDelegate> delegate;
@property (copy, nonatomic) id /* block */ widthChangeCallback;

+ (id)networkImageForState:(long long)a0;

- (void)layoutSubviews;
- (void)forceLayoutForOrientationChanged;
- (void)layoutUI;
- (void)updateSubViewsHidden:(BOOL)a0;
- (void)layoutNetworkStateImageView;
- (void)layoutTimerLabel;
- (void)layoutLikedImageView;
- (void)layoutLikedCountLabel;
- (void)onLiveQualityUpdated:(id)a0;
- (void)updateLikeCount:(unsigned long long)a0;
- (void)onEnterLive;
- (double)getLikedCountLabelRight;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveProgressUpdated:(unsigned int)a0;
- (void).cxx_destruct;

@end
