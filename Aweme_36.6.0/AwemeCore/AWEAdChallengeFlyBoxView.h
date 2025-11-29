@class BDImageView, NSString, AWEChallengeModel, UIButton;

@interface AWEAdChallengeFlyBoxView : UIView <UIGestureRecognizerDelegate, AWECrotocol, AWEAdChallengeFlyBoxView>

@property (retain, nonatomic) BDImageView *flyBoxImage;
@property (retain, nonatomic) BDImageView *flyBoxHideImage;
@property (nonatomic) BOOL animationLock;
@property (nonatomic) BOOL isFlyBoxHideStatus;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIButton *interactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isUserDragging;
@property (nonatomic) BOOL isEnterFullScreenAdLiveRoom;

- (void)switchToStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadImage;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tapped:(id)a0;
- (void)updateWithModel:(id)a0;

@end
