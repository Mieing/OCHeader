@class NSString;

@interface AWELandscapeUtil : NSObject <AWELandscapeUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAuthorDanmakuInModel:(id)a0;
+ (id)formateDuration:(id)a0;
+ (id)transToAWEAwemePlayVideoVCIfNeeded:(id)a0;
+ (BOOL)confirmIsPortraitVideo:(id)a0;
+ (id)landscapeTitleWithModel:(id)a0 pageContext:(id)a1 containNewlineCharacter:(BOOL)a2;
+ (id)formateCount:(id)a0;
+ (id)screenModeStatusWithInteractionViewState:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoControllerFrameWithModel:(id)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerControllerFrameWithPlayerView:(id)a0 containerView:(id)a1 model:(id)a2;
+ (id)accessibilityDuration:(id)a0;
+ (void)prefetchCoverImageWithModel:(id)a0;
+ (id)landscapeTitleWithModel:(id)a0 pageContext:(id)a1;
+ (long long)scaleModeForVideoWithModel:(id)a0;
+ (BOOL)shouldShowMixButtonWithModel:(id)a0 pageContext:(id)a1;


@end
