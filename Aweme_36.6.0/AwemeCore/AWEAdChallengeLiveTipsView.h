@class NSString, UIImageView, UILabel, UIView, BDImageView;

@interface AWEAdChallengeLiveTipsView : UIView <AWEAdChallengeLiveTipsView>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *liveAnimationView;
@property (retain, nonatomic) UILabel *liveTipsLabel;
@property (retain, nonatomic) UIImageView *userImage;
@property (retain, nonatomic) UIView *animationContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatStringWithUsersCount:(long long)a0;

@end
