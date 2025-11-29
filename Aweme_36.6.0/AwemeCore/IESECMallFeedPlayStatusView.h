@class IESECUIButton, IESECMallListKitCellData, UIImageView, UILabel, UIView, IESECUIImageView;

@interface IESECMallFeedPlayStatusView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECUIImageView *iconImageView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIImageView *iconJustShowImageView;
@property (retain, nonatomic) IESECUIButton *muteButton;
@property (retain, nonatomic) IESECMallListKitCellData *cellModel;
@property (nonatomic) BOOL hideMuteButton;
@property (nonatomic) BOOL isVideoCard;
@property (copy, nonatomic) id /* block */ muteClick;
@property (nonatomic) BOOL isMute;

- (BOOL)isDouyinUI;
- (void)muteButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isVideoCard:(BOOL)a1;
- (void)updateWithModel:(id)a0 mute:(BOOL)a1;
- (void)updateWithBorderRadius:(double)a0;
- (void)updateVoiceMute:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
