@class BDASplashBackgroundView, NSString, BDASplashMaterialBaseView, UIView, BDASplashMaterialViewModel;
@protocol BDASplashMaterialViewHolderDelegate;

@interface BDASplashMaterialViewHolder : NSObject <BDASplashMaterialViewDelegate, CAAnimationDelegate>

@property (nonatomic) BOOL isPrepared;
@property (retain, nonatomic) BDASplashMaterialBaseView *view;
@property (retain, nonatomic) BDASplashMaterialViewModel *model;
@property (weak, nonatomic) id<BDASplashMaterialViewHolderDelegate> delegate;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) BDASplashBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *secondView;
@property (nonatomic) BOOL hasCheckEnableAnimation;
@property (nonatomic) BOOL enableAnimation;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) UIView *maskAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (void)loadAnimationView;
- (void)trackOver;
- (id)getView;
- (void)loadAnimation;
- (void)trackNoAdEvent:(id)a0 params:(id)a1;
- (void)materialReadyToShow;
- (void)materialHasEnded;
- (void)trackAdEvent:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)setupView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)trackBreak:(unsigned long long)a0;
- (void)loadEnhanceAnimation;
- (void)loadUpgradeAnimation;
- (void)loadEnhanceView;
- (id)realtimeInfo;
- (void)trackURLs:(id)a0 label:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 delegate:(id)a2;
- (void)loadMaterialResource;
- (double)getDisplayTime;
- (void).cxx_destruct;
- (void)pause;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stop:(unsigned long long)a0;
- (void)update;
- (void)show;

@end
