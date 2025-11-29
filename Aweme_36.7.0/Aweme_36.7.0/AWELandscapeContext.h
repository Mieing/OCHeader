@class NSString, AWELandscapeFeedViewController;

@interface AWELandscapeContext : NSObject

@property (weak, nonatomic) AWELandscapeFeedViewController *controller;
@property (nonatomic) BOOL hasIncrementSlideCount;
@property (nonatomic) BOOL exitLandsacpeAfterViewDidAppear;
@property (nonatomic) unsigned long long landscapeEnterFrom;
@property (nonatomic) BOOL shouldResetPlaybackRate;
@property (nonatomic) BOOL isPlayingOnOpenCastSearchPage;
@property (copy, nonatomic) NSString *needContinueScreenCastItemID;
@property (nonatomic) BOOL hasShowSlideGuide;
@property (nonatomic) BOOL isPlayInAdvance;

- (void)setScrollEnable:(BOOL)a0;
- (id)curSceneString;
- (void)playNextVideo;
- (BOOL)hasNextVideo;
- (BOOL)isPersonalPageSlideEnable;
- (BOOL)needShowMixContinusPlayReminder;
- (void)markHasShowSlideGuide;
- (BOOL)hasMoveCell;
- (void)replaceCurrentModelWithFloatModel:(id)a0;
- (void)exitSplitScreenMode;
- (void)enterSplitScreenToMode:(long long)a0 dataController:(id)a1 completionBlock:(id /* block */)a2;
- (void)requestMixContinusDataIfNeed;
- (BOOL)autoPlayMixContinusVideoSuccess;
- (id)screenCastAdapter;
- (id)screenCastVideoDelegate;
- (void)updateScrollEnableStatus:(BOOL)a0;
- (void)incrementSlideGuideCountIfNeeded;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;

@end
