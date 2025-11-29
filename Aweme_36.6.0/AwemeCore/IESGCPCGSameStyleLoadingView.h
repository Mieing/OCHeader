@class CAGradientLayer, NSString, UIImageView, IESGCPTimer, UIView, UILabel, IESGCPCGSameStyleLoadingGiftView;

@interface IESGCPCGSameStyleLoadingView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL backgroundImageHasSet;
@property (retain, nonatomic) UIView *backgroundGreyView;
@property (retain, nonatomic) CAGradientLayer *backgroundGreyViewLayer;
@property (retain, nonatomic) UIImageView *gameIconView;
@property (retain, nonatomic) UIImageView *brandIconView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) IESGCPTimer *autoIncrementTimer;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *giftGradientView;
@property (retain, nonatomic) IESGCPCGSameStyleLoadingGiftView *giftView;
@property (retain, nonatomic) UIImageView *giftReceivedIcon;
@property (copy, nonatomic) NSString *giftInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updateBackgroundImage:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (void)showTipLabelWithText:(id)a0;
- (void)startProgressAutoIncrementWhenMapReady:(BOOL)a0;
- (void)stopLoadingProgress;
- (void)updateGameIcon:(id)a0;
- (void)setBackgroundImageMaskHidden:(BOOL)a0;
- (void)updateGiftPackageView:(id)a0 hasReceived:(BOOL)a1;
- (void)_onProgressDidAutoIncreased;
- (void)addGradientLayerToGiftGradientView;
- (void)_onProgressDidAutoIncreasedForMapNotReady;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (void)_updateProgress:(double)a0;

@end
