@class NSString, UIImageView, NSDictionary, ShelfInfo;
@protocol IESLiveWebPPlayer;

@interface IESLiveAudienceNativeAppToolbarView : UIView <IESLiveAudienceNativeAppAnimationActions, IESLiveToolBarCoordinaryAnimationAction> {
    long long _animationABType;
    long long _animationTriggerTimes;
}

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *snowImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *flyWebpPlayer;
@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (nonatomic) BOOL isShowingFlowerAnim;
@property (retain, nonatomic) NSDictionary *cachedImageTrackDict;
@property (copy, nonatomic) id /* block */ willStartFlowerAnimationBlock;
@property (copy, nonatomic) NSString *roomSceneName;
@property (nonatomic) BOOL isEnterRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (long long)abType;
- (unsigned long long)animationTriggerState;
- (BOOL)isShowingFlowerAnimation;
- (BOOL)enableAllAnimationWithShelfInfo:(id)a0;
- (BOOL)enableTriggerCenterFlowerAnimationWithShelfInfo:(id)a0 isEnterRoom:(BOOL)a1 is01Shelf:(BOOL)a2;
- (BOOL)enablePlayCenterFlowerAnimationWithShelfInfo:(id)a0;
- (BOOL)enablePlayBusinessFlowerAnimationWithShelfInfo:(id)a0 isEnterRoom:(BOOL)a1 isChange:(BOOL)a2;
- (BOOL)enableSmallCardAnimationWithShelfInfo:(id)a0 isEnterRoom:(BOOL)a1 isShow:(BOOL)a2;
- (BOOL)enableBigCardAnimationWhenIsEnterRoom:(BOOL)a0;
- (id)trackImageResultWithURLString:(id)a0 beginTimeMS:(double)a1 extraDict:(id)a2;
- (void)trackCachedImageResultIfNeedWithExtraDict:(id)a0;
- (void)addCoordinateAnimationAction;
- (void)doFlyOutAnimationWithCompletion:(id /* block */)a0;
- (void)doFlyBackAnimationWithCompletion:(id /* block */)a0;
- (void)updateStaticImage:(id)a0;
- (void)triggerCoordinateAnimation;
- (void)updateShelfInfo:(id)a0;
- (void)prefetchWebPURL;
- (void)updateUIForAnimation;
- (void)doRemoteWebp:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)doFlowerAnimationWithComplete:(id /* block */)a0;
- (BOOL)enableDeviceWithKey:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)triggerAnimation;
- (void)setupService;

@end
