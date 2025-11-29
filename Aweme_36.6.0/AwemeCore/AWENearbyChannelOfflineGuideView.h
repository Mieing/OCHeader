@class NSTimer, UIView, UIImage, AWEAlertNearbyFirstMoveGuideEvent, NSString, UIImageView, UIButton, AWEGradientView, UILabel, AWENearbyGuideModel;

@interface AWENearbyChannelOfflineGuideView : UIView <AWENearbyChannelMoveProtocol>

@property (retain, nonatomic) UIView *animationArea;
@property (retain, nonatomic) UIImage *transformerImage;
@property (retain, nonatomic) UIImageView *triangleImgView;
@property (retain, nonatomic) UIImageView *channelImgView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *grouponTabBtn;
@property (nonatomic) struct CGPoint { double x; double y; } disappearCenter;
@property (retain, nonatomic) AWEAlertNearbyFirstMoveGuideEvent *event;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) AWENearbyGuideModel *guideModel;
@property (retain, nonatomic) UIButton *blackTransparentView;
@property (retain, nonatomic) AWEGradientView *highlightGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transformerRect;
@property (nonatomic) unsigned long long transformerOfflineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)doHideAnimOfButtonWithBlk:(id /* block */)a0;
- (void)showTransparentAreaWithTargetView:(id)a0;
- (void)doHideImmediately;
- (void)blackTransparentViewClicked:(id)a0;
- (void)userDidClickBtn:(id)a0;
- (void)startDisappearTimer;
- (void)doHideAnimOfOthersWithBlk:(id /* block */)a0;
- (void)trackOfflineClickEventWithAreaInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 image:(id)a2 transformerOfflineType:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
