@class UILabel, NSTimer, DUXAvatar, DUXBaseImageView, AWELeftSideBarEntranceCaptionBubbleModel, UIButton;

@interface AWELeftSideBarEntranceCaptionBubbleView : UIView

@property (retain, nonatomic) AWELeftSideBarEntranceCaptionBubbleModel *model;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) DUXBaseImageView *defaultDarkImageView;
@property (retain, nonatomic) DUXBaseImageView *defaultLightImageView;
@property (retain, nonatomic) DUXAvatar *strengthenImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXBaseImageView *closeImageView;
@property (retain, nonatomic) UIButton *containerButton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) double maxCaptionWidth;
@property (copy, nonatomic) id /* block */ clickContentBlock;
@property (copy, nonatomic) id /* block */ clickCloseButtonBlock;
@property (copy, nonatomic) id /* block */ autoDismissBlock;

- (void)awe_themeDidChange:(long long)a0;
- (double)topCTAFloat:(double)a0;
- (void)showWithAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)hideWithAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)handleContainerClickAction;
- (double)maxCaptionBubbleWidth;
- (void)handleCloseClickAction;
- (BOOL)shouldShowStrengthenImage;
- (void)addDismissTimerIfNeed;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setupUI;
- (id)initWithModel:(id)a0 maxWidth:(double)a1;

@end
