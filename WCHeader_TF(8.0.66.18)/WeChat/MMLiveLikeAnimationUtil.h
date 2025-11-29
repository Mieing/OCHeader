@class NSString, NSMutableArray;

@interface MMLiveLikeAnimationUtil : NSObject <MMWebImageViewDelegate>

@property (retain, nonatomic) NSMutableArray *animationViewArr;
@property (retain, nonatomic) NSMutableArray *animationIconArr;
@property (retain, nonatomic) NSMutableArray *clapModeAnimationIconArr;
@property (retain, nonatomic) NSMutableArray *webIconArr;
@property (retain, nonatomic) NSMutableArray *animationRouteArr;
@property (retain, nonatomic) NSMutableArray *headerAnimationRouteArr;
@property (retain, nonatomic) NSMutableArray *doubleClickAnimationRouteArr;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isShowAnimationView;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isEnterBackground;
@property (retain, nonatomic) NSMutableArray *animationRouteHistoryArray;
@property (nonatomic) long long businessType;
@property (nonatomic) BOOL isInClapMode;
@property (nonatomic) BOOL isWebIconDisabled;
@property (nonatomic) double finalLikeViewAlpha;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAllow30FpsAnimation:(BOOL)a0;

- (id)initWithBusinessType:(long long)a0;
- (void)initData;
- (void)dealloc;
- (void)initNotifications;
- (void)initAnimationIcons;
- (void)resetIconsRate:(id)a0;
- (id)getIconRandom;
- (void)addIconFromWeb:(id)a0 rate:(float)a1;
- (void)resetIconToOrigin;
- (BOOL)webIconHasExits:(id)a0;
- (void)initAnimationRoutes;
- (void)initHeaderAnimationRoutes;
- (void)initDoubleClickAnimationRoutes;
- (id)createLikeAnimationView;
- (id)createDoubleClickLikeAnimationView;
- (id)createSelfLikeAnimationHeaderView;
- (id)createOtherLikeAnimationHeaderViewFromContact:(id)a0;
- (id)getRandAnimationRoute;
- (id)getAnotherRoute:(id)a0;
- (id)getRandHeaderAnimationRoute;
- (id)getSelfLiveHeaderAnimationRoute;
- (id)getDoubleClickLikeAnimationRoute;
- (void)onLoadImageOK:(id)a0;
- (void)startLiveLikeAnimationAtCenter:(struct CGPoint { double x0; double x1; })a0 inSuperView:(id)a1;
- (void)startDoubleClickLiveLikeAnimationAtPosition:(struct CGPoint { double x0; double x1; })a0 inSuperView:(id)a1;
- (void)startLiveSelfLikeHeadImageAtCenter:(struct CGPoint { double x0; double x1; })a0 inSuperView:(id)a1;
- (void)startLiveLikeHeadImageAtCenter:(struct CGPoint { double x0; double x1; })a0 inSuperView:(id)a1 fromContact:(id)a2;
- (void)startLiveLikeHeadImageAnimationAtCenter:(struct CGPoint { double x0; double x1; })a0 InSuperView:(id)a1 fromContact:(id)a2;
- (void)showAnimationView;
- (void)hideAnimationView;
- (void)continueLiveLike;
- (void)pauseLiveLike;
- (void)enterClapMode;
- (void)exitClapMode;
- (void)willEnterForeground:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)handleUIOrientationChanged:(id)a0;
- (void).cxx_destruct;

@end
