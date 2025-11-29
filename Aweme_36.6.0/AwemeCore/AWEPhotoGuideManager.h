@class AWEBubble, NSTimer, NSString;

@interface AWEPhotoGuideManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEBubble *photoGuideBubble;
@property (retain, nonatomic) NSTimer *photoGuideTimer;
@property (nonatomic) BOOL synchInfoAfterLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)hidePhotoGuide;
- (BOOL)isPhotoGuideShowing;
- (void)showPhotoGuide;
- (void)_showPhotoGuide;
- (id)AWETabBarControllerShouldShowPhotoIntruductionKey;
- (BOOL)_customShouldShowPhotoGuide:(BOOL)a0;
- (id)_customFirstLine;
- (id)_customSecondLine;
- (void)handleTapOnBubble:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
