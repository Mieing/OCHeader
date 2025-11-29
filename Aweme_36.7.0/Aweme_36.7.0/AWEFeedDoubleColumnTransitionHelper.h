@class NSObject, NSString, UIView, NSNumber, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEFeedNewDoubleColumnSmallWindowViewControllerProtocol, AWEHPRecommendDoubleColumnChannelControllerProtocol;

@interface AWEFeedDoubleColumnTransitionHelper : NSObject

@property (weak, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *recommendFeedVC;
@property (weak, nonatomic) NSObject<AWEHPRecommendDoubleColumnChannelControllerProtocol> *c2VC;
@property (retain, nonatomic) NSNumber *enterInteractionPreAlpha;
@property (retain, nonatomic) UIView *currentTransitionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exitFinishFrame;
@property (retain, nonatomic) UIView *currentEnterFullView;
@property (retain, nonatomic) NSString *currentFeedItemID;
@property (retain, nonatomic) UIView *enterBackgroundView;
@property (weak, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol> *feedVideoController;
@property (weak, nonatomic) UIViewController<AWEFeedNewDoubleColumnSmallWindowViewControllerProtocol> *smallWindowVC;
@property (nonatomic) BOOL couldAnimToContinuePlay;
@property (copy, nonatomic) id /* block */ enterAnimationStartBlock;

+ (BOOL)isHitPinchToC2AnimationOptimize;
+ (id)enableAnimationLeaveMethodList;
+ (BOOL)enableC2FeedTransitionAnimation;
+ (BOOL)disableToSingleHomepageAnim;
+ (id)enableAnimationEnterMethodList;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionAnimationTargetFrame;
+ (id)sharedInstance;

- (void)triggerPinchEnterAnimationWithAnimationView:(id)a0 backgroundView:(id)a1 beginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 normalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)clearInfo;
- (id)getSmallWindowVC;
- (void)cancelEnterAnimation;
- (void)recordSmallWindowVC:(id)a0;
- (BOOL)currentAwemeDisablePinchOpt:(id)a0;
- (void)recordRecommendFeedVC:(id)a0;
- (void)triggerOptEnterAnimationWithStartAnimation:(BOOL)a0;
- (void)trigerEnterAnimationWithDuration:(double)a0;
- (BOOL)shouldAnimToContinuePlay;
- (void)recordDoubleColumnChannelViewController:(id)a0;
- (BOOL)triggerCommonEnterAnimationIfNeededWithEnterMethod:(id)a0 previousTabID:(id)a1 finishRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)trigerEnterAnimation;
- (void)triggerExitAnimationIfNeededWithLeaveMethod:(id)a0 toTabID:(id)a1 beginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)triggerOptExitAnimationWithLeaveMethod:(id)a0 toTabID:(id)a1 beginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 animatedView:(id)a3 backgroundView:(id)a4 tipsView:(id)a5;
- (id)currentAwemeAtFeed;
- (void).cxx_destruct;

@end
