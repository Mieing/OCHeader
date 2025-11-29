@class NSString, AWEHomepageTopBarContext, NSMutableSet, UIView, UIImage, UIViewController;
@protocol AWEFeedTableViewControllerProtocol;

@interface AWEFeedDoubleColumnPinchManager : NSObject <AWEFeedDoubleColumnPinchManagerProtocol>

@property (weak, nonatomic) UIViewController *doubleColumnVC;
@property (retain, nonatomic) NSMutableSet *dislikeSet;
@property (retain, nonatomic) NSMutableSet *skipSet;
@property (weak, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *recommendFeedVC;
@property (nonatomic) BOOL nextExitUseAnimation;
@property (nonatomic) BOOL exitAnimationAlreadyPrepared;
@property (weak, nonatomic) UIView *exitTargetView;
@property (retain, nonatomic) AWEHomepageTopBarContext *topBarContext;
@property (retain, nonatomic) UIImage *videoSnapshotImage;
@property (nonatomic) BOOL isPinching;
@property (retain, nonatomic) NSString *currentEnterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHitPinchToDoubleColumnTest;
+ (void)recordEnterGuideShowOrBlock;
+ (BOOL)needEnterGuide;
+ (BOOL)needExitGuide;
+ (BOOL)isDoubleColumnVCAtTop;
+ (id)pinchToDoubleColumnDict;
+ (BOOL)needEnterGuideWithAweme:(id)a0;
+ (long long)exitGuideDelayDuration;
+ (void)recordExitGuideShowOrBlock;
+ (BOOL)disableAnimationAbility;
+ (BOOL)enableFixPinchToC2;
+ (id)experimentID;
+ (id)sharedInstance;

- (id)getVideoSnapshotImage;
- (void)trigerEnterGuideIfNeededWithAweme:(id)a0;
- (void)recordDislikeWithItemID:(id)a0 referString:(id)a1;
- (BOOL)enablePinchOpt;
- (void)recordVideoSnapshotImage:(id)a0;
- (void)recordSkipCellIfNeed:(id)a0 appearTime:(double)a1;
- (id)currentTopVC;
- (id)pinchOptConfig;
- (double)quitDoubleColumnPinchScaleThreshold;
- (void)trigerExitGuideIfNeeded;
- (void)recordTopBarContext:(id)a0;
- (id)getTopBarContext;
- (long long)pinchDisorderStyle;
- (double)enterDoubleColumnPinchScaleThreshold;
- (double)pinchTargetViewTransformRatio;
- (double)pinchTargetViewTransformMaxPinchScale;
- (BOOL)enablePinchSkeletonView;
- (BOOL)enablePinchHaptic;
- (BOOL)enablePinchTipsView;
- (id)enterDoubleColumnPinchTipsTitle;
- (id)quitDoubleColumnPinchTipsTitle;
- (id)quitDoubleColumnPinchTipsIcon;
- (id)enterDoubleColumnPinchTipsIcon;
- (void)prepareForExitGuideIfNeeded:(id)a0;
- (void)cancelExitGuideIfNeeded;
- (void)recordRecommendFeedVC:(id)a0;
- (void)useExitAnimationIfAvailable;
- (void)cancelExitAnimationIfAvailable;
- (void)prepareForExitAnimationIfNeeded;
- (void)trigerExitAnimationIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
