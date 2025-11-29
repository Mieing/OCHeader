@class NSTimer, NSString, UIImageView, AWEPayLoadingButton, LOTAnimationView, DUXBaseButton, UILabel, AWEPayAnimateTextView;

@interface AWEPaySpecialMediaView : UIView

@property (nonatomic) unsigned long long charIndex;
@property (retain, nonatomic) NSTimer *playTimer;
@property (retain, nonatomic) LOTAnimationView *lotView;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *ownerLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) AWEPayAnimateTextView *wishesContainer;
@property (retain, nonatomic) UILabel *wishesLabel;
@property (retain, nonatomic) AWEPayLoadingButton *specialConfirmBtn;
@property (retain, nonatomic) DUXBaseButton *closeBtn;
@property (copy, nonatomic) NSString *wishesText;
@property (nonatomic) double textAnimationTime;
@property (nonatomic) double delayTime;
@property (copy, nonatomic) id /* block */ openRedPackageBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (void)p_dismiss;
- (void)p_deactivateTimer;
- (void)releaseAnimate;
- (void)p_activateTimer;
- (void)p_animateText;
- (void)p_open;
- (void)p_generateChar;
- (void).cxx_destruct;
- (void)play;

@end
