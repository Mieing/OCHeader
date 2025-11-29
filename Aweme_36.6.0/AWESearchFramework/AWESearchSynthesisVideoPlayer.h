@class NSString, NSDictionary, AWEAwemeModel, UIView, UIViewController;
@protocol AWEDPlayerProtocol, AWESearchSynthesisVideoPlayerDelegate;

@interface AWESearchSynthesisVideoPlayer : NSObject <AWEDPlayerActionDelegate, AWELandscapeTransitionOuterContextProvider, AWEDPlayerDelegate>

@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *playerViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *videoURL;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWESearchSynthesisVideoPlayerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *transcodingVideoResultData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)bottomRightElementArray;
- (id)buildGeneralPlayerConfig;
- (id)middleElementArray;
- (id)controllerBelowBaseUIArray;
- (id)elementConfigWithType:(unsigned long long)a0;
- (id)controllerConfigWithType:(unsigned long long)a0;
- (BOOL)generalViewController:(id)a0 clickElementType:(unsigned long long)a1;
- (double)playerHeight;
- (id)landscapeTransitionContext;
- (void)didEnterLandscapeWithToContext:(id)a0;
- (void)didExitLandscapeWithFromContext:(id)a0;
- (id)videoPlayerContainerView;
- (id)topLeftElementArray;
- (id)topRightElementArray;
- (id)bottomLeftElementArray;
- (id)controllerAboveBaseUIArray;
- (id)customElementDict;
- (void)stopPlayer;
- (double)playerWidth;
- (void)p_addPlayerToContainerView:(id)a0;
- (void)p_addTapActionForPlayerArea;
- (id)buildVideoConfig;
- (void)enterFullScreenPlayer;
- (void)showPlayerWithVideoURL:(id)a0 onView:(id)a1;
- (void).cxx_destruct;

@end
