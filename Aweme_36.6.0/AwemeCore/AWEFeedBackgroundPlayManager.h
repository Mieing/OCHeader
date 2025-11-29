@class AWENowPlayingInfoCenter, NSMutableDictionary, AWEAwemeModel, NSString;
@protocol AWEFeedBackgroundPlayManagerDelegate;

@interface AWEFeedBackgroundPlayManager : NSObject <AWENowPlayingInfoPlayerProtocol, AWEFeedBackgroundPlayManagerProtocol>

@property (retain, nonatomic) AWENowPlayingInfoCenter *playingCenter;
@property (nonatomic) BOOL backgroundPlayerIsOn;
@property (nonatomic) BOOL enableListenFeed;
@property (nonatomic) long long numberOfListenFeedPage;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (weak, nonatomic) id<AWEFeedBackgroundPlayManagerDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *firstItemIDByLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateOfHour:(long long)a0 minute:(long long)a1 date:(id)a2;
+ (Class)aAWEListenFeedAdapterClass;
+ (double)filterViewHeight;
+ (id)backgroundModeParams;
+ (BOOL)isSmallScreenPhone;
+ (void)setIsCloseAfterCompletionSwitchOn:(BOOL)a0;
+ (BOOL)getIsCloseAfterCompletionSwitchOn;
+ (BOOL)getIsSpeedSwitchOn;
+ (void)setIsSpeedSwitchOn:(BOOL)a0;
+ (BOOL)isListenFeedTargetReferString:(id)a0 enterFrom:(id)a1;
+ (BOOL)canUseListenFeedUseNumberOfPage:(BOOL)a0;
+ (BOOL)canUseListenFeed;
+ (BOOL)isLateNight;
+ (id)categoryHintTextForMixVideoModel:(id)a0;
+ (id)sharedInstance;

- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:(double)a0;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (BOOL)canSeekForRemoteControl;
- (BOOL)canLikeForRemoteControl;
- (void)likeForRemoteControl;
- (BOOL)isLikeActive;
- (BOOL)isNormalTypeForPinchToListen:(id)a0;
- (void)refreshNowPlayingInfo;
- (void)updateNowPlayingInfoPlayback;
- (void)setupCommand;
- (void)resetNowPlayingInfo:(id)a0;
- (void)clearCommand;
- (BOOL)showListenFeedWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
- (id)aAWEListenFeedAdapter;
- (BOOL)satisfyListenFeedForModel:(id)a0;
- (BOOL)shouldFilterListenFeedWithModel:(id)a0 useExternalDataController:(BOOL)a1;
- (void)clearNowPlayingInfo;
- (void)handleBackgroundPlayAutoNext;
- (BOOL)isVIPSubscribeContentAllowedListenWithAwemeModel:(id)a0;
- (BOOL)satisfyListenFeedShowEntranceForModel:(id)a0;
- (BOOL)satisfyListenFeedCommonForModel:(id)a0;
- (BOOL)satisfyAwemeModel:(id)a0;
- (BOOL)albumWithoutMusic:(id)a0;
- (BOOL)isEqualToCurrentID;
- (void)refreshNowPlayingInfoIsForce:(BOOL)a0;
- (BOOL)satisfyExternalDataControllerListenFeedForModel:(id)a0;
- (BOOL)shouldPlayWithMixPayedModel:(id)a0;
- (BOOL)isBackgroundPlayerOn;
- (void)resignAudioFucus;
- (void).cxx_destruct;

@end
