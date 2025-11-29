@class UIStackView, UIView, NSString, RingToneDetail, VideoRingNetProvider, UIButton, RingToneImageView, MMUILabel;
@protocol RingTonePickTableViewCellDelegate;

@interface RingTonePickTableViewCell : UITableViewCell <RingTonePlayerExt>

@property (retain, nonatomic) RingToneImageView *coverView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIStackView *descStack;
@property (retain, nonatomic) UIButton *useButton;
@property (retain, nonatomic) UIButton *listButton;
@property (retain, nonatomic) UIButton *originVideoButton;
@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) VideoRingNetProvider *net;
@property (weak, nonatomic) id<RingTonePickTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL forbidActionButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateContentWithRingDetail:(id)a0 higlightContent:(BOOL)a1;
- (void)internalUpdateContentWith:(id)a0 higlightContent:(BOOL)a1;
- (void)prepareForReuse;
- (void)initBottomView;
- (void)initCoverView;
- (void)initTiltleLabel;
- (void)initdescLabel;
- (void)initActionButtons;
- (void)changeButtonImageForVoIP;
- (void)addConstraints;
- (void)onUseButtonTap;
- (void)onTapToPlay;
- (BOOL)accessibilityPerformMagicTap;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
