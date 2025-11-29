@class UIView, MMWebImageButton, MMUIImageView, MMWebImageView, WCFinderFeedContentVM, NSString, UIButton, WCFinderSimplePlayerView, UILabel;

@interface WCFinderFullCardTypeMediaTableViewCell : WCFinderTableViewCell <WCFinderFeedContentVMExt, WCFinderFocusCellProtocol>

@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) MMWebImageView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) MMWebImageButton *rightButton;
@property (retain, nonatomic) MMUIImageView *playIconView;
@property (retain, nonatomic) UIButton *dragupTipsLabel;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)setupSubView;
- (void)setup29179ReportParamsWithView:(id)a0 viewId:(id)a1;
- (id)gen29179ReportDict;
- (id)genImageButton;
- (struct CGSize { double x0; double x1; })rightBtnSizeWithTitle:(id)a0;
- (void)setupLayout;
- (double)getPlayVideoTotalTime;
- (void)updateWithContentVM:(id)a0;
- (void)_updatePlayPauseState;
- (void)_updateUIWithContentVM:(id)a0;
- (void)_updateUIWithLeftJumpInfo:(id)a0 rightJumpInfo:(id)a1;
- (BOOL)currentMediaIsPlay;
- (void)onClickRightButton:(id)a0;
- (void)onClickBottomContainerView;
- (void)onTapInPlayer;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (void)onFeedContentJumpInfoContainerChanged:(id)a0 isPureUIChanged:(BOOL)a1 showPosition:(int)a2 scene:(int)a3;
- (void)onFeedContent:(id)a0 pauseChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
