@class NSString, NSDictionary, UILabel, IESLiveAnimatedImageView, UIView;

@interface IESLivePKPanelFancyAutoMatchView : UIView

@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *speedUpAutoMatchContainerView;
@property (nonatomic) BOOL isBtnTitleAnimating;
@property (retain, nonatomic) UILabel *autoMatchBtnLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *rivalAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *btnAnimationView;
@property (nonatomic) BOOL isStickyForNoFollower;
@property (nonatomic) BOOL needShowMultiMatchView;
@property (copy, nonatomic) NSString *autoMatchInfo;
@property (copy, nonatomic) NSDictionary *panelTrackParams;

- (double)fitLength:(double)a0;
- (void)showAdvancedSpeedAutoMatchWithAutoMatchInfo:(id)a0 isNewAnchor:(BOOL)a1;
- (void)didTapAutoMatchArea;
- (void)didTapMultiPKMatchButton;
- (void)doBtnTitleAnimation;
- (void)updateViewsForSticky;
- (void).cxx_destruct;

@end
