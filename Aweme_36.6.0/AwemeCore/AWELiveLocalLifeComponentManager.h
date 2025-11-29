@class BDImage, AWEURLModel, NSString, UIView, BDImageView;

@interface AWELiveLocalLifeComponentManager : NSObject <AWELiveLocalLifeComponentManagerProtocol>

@property (retain, nonatomic) UIView *motionEntranceContainerView;
@property (retain, nonatomic) BDImageView *motionEntranceImageView;
@property (retain, nonatomic) BDImageView *expoundCardComboImageView;
@property (retain, nonatomic) BDImage *comboCardFlyOutWebp;
@property (retain, nonatomic) BDImage *comboCardFlyInWebp;
@property (retain, nonatomic) AWEURLModel *liveRoomEntranceIconModel;
@property (nonatomic) BOOL hasConfigIcon;
@property (nonatomic) long long animationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)motionEntranceView;
- (void)startMotionAnimationIfNeeded;
- (id)currentIconModel;
- (void)updateIconAnimationModel:(id)a0;
- (void)startMotionAnimation_animationTest;
- (void)configIconModel:(id)a0;
- (BOOL)isFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeededWithFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeeded;
- (void)removeExpoundCardComboAimatedCompletion:(id /* block */)a0;
- (long long)comboAnimationStatus;
- (void)startExpoundCardComboAimatedWithType:(long long)a0 completion:(id /* block */)a1;
- (void)restartPlayMotionAnimation;
- (BOOL)p_isWebpImage:(id)a0;
- (BOOL)p_couldDoComboAnimat;
- (void).cxx_destruct;
- (BOOL)isAnimating;

@end
