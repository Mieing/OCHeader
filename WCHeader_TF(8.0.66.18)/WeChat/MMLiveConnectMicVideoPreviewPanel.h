@class UILabel, CAGradientLayer, MMUIButton, NSString, WCLiveVideoView, UIView, UITapGestureRecognizer;
@protocol MMLiveConnectMicVideoPreviewPanelDelegate;

@interface MMLiveConnectMicVideoPreviewPanel : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) WCLiveVideoView *videoView;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *videoTextBackgroundLayer;
@property (retain, nonatomic) UILabel *videoTextLabel;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (weak, nonatomic) id<MMLiveConnectMicVideoPreviewPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)showPanelWithVideoView:(id)a0;
- (void)onTapNotPanelArea;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)closeActionWithConfirmed:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
