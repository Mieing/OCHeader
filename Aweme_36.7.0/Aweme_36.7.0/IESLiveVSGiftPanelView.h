@class UIView, IESLiveGradientView, IESLiveVSGiftPanelViewModel, NSString, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftSectionView, UIImageView, NSDictionary, CAGradientLayer, IESLiveVSGiftPanelCommonReactionCenter;

@interface IESLiveVSGiftPanelView : UIView <IESLiveVSGiftPanelCommonReaction>

@property (retain, nonatomic) UIView *gestureView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *coverTopImageView;
@property (retain, nonatomic) UIImageView *coverBottomImageView;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (retain, nonatomic) IESLiveVSGiftSectionView *sectionView;
@property (retain, nonatomic) IESLiveVSGiftPanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveGradientView *bottomPortraitView;
@property (retain, nonatomic) UIImageView *topLeftImageView;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (nonatomic) long long style;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isLandScapePanelV2Enable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 viewModel:(id)a2;
- (void)updateToVerticalStyle;
- (void)configBackgroundWithColors:(id)a0 backgroundImage:(id)a1 backgroundTop:(id)a2 backBottomImage:(id)a3 topleftTitle:(id)a4;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
