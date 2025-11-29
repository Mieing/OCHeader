@class NSString, LOTAnimationView, UIView, NSDate;

@interface HTSLiveDislikeGuideManager : NSObject <IESLiveDislikeGuide>

@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL canShow;
@property (retain, nonatomic) NSDate *enterTime;
@property (weak, nonatomic) UIView *guideView;
@property (weak, nonatomic) LOTAnimationView *animationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canShowGuide;
- (void)hideGuide;
- (BOOL)isShowingGuide;
- (BOOL)hasShownBefore;
- (void)triggerScrollUp;
- (void)triggerScrollDown;
- (void)triggerEnterRoom;
- (void)triggerLeaveRoom;
- (void)showGuideIfNeededAtView:(id)a0;
- (void)setNotNeedShowGuide;
- (void).cxx_destruct;
- (void)play;

@end
