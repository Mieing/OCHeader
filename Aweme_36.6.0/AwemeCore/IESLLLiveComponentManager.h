@class BDImage, NSArray, NSString, UIView, BDImageView;

@interface IESLLLiveComponentManager : NSObject <IESLLLiveComponentManagerProtocol>

@property (retain, nonatomic) UIView *motionEntranceContainerView;
@property (retain, nonatomic) BDImageView *motionEntranceImageView;
@property (retain, nonatomic) BDImageView *expoundCardComboImageView;
@property (retain, nonatomic) BDImage *comboCardFlyOutWebp;
@property (retain, nonatomic) BDImage *comboCardFlyInWebp;
@property (retain, nonatomic) NSArray *liveRoomEntranceIconUrlList;
@property (nonatomic) BOOL hasConfigIcon;
@property (nonatomic) long long animationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)motionEntranceView;
- (void)startMotionAnimationIfNeeded;
- (void)startMotionAnimation_animationTest;
- (BOOL)isFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeededWithFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeeded;
- (void)removeExpoundCardComboAimatedCompletion:(id /* block */)a0;
- (long long)comboAnimationStatus;
- (void)startExpoundCardComboAimatedWithType:(long long)a0 completion:(id /* block */)a1;
- (void)restartPlayMotionAnimation;
- (BOOL)p_isWebpImage:(id)a0;
- (BOOL)p_couldDoComboAnimat;
- (id)currentIconUrlList;
- (void)updateIconAnimation:(id)a0;
- (void)configIconUrlList:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAnimating;

@end
