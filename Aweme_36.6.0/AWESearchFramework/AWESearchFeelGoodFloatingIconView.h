@class AWESearchFeelGoodFloatingIconSpringView, AWESearchFeelGoodDataModel, UIImageView, UIView, UILabel, AWESearchFeelGoodDialogBubbleView;

@interface AWESearchFeelGoodFloatingIconView : AWESearchFeelGoodElementView {
    BOOL _isOnlySupportLightMode;
}

@property (retain, nonatomic) UIView *iconImageView;
@property (retain, nonatomic) UIImageView *iconImageViewContainer;
@property (retain, nonatomic) AWESearchFeelGoodDialogBubbleView *bubbleView;
@property (retain, nonatomic) AWESearchFeelGoodFloatingIconSpringView *springView;
@property (retain, nonatomic) UIView *iconWithText;
@property (retain, nonatomic) UIView *iconWithTextContainer;
@property (retain, nonatomic) UIImageView *iconWithTextImage;
@property (retain, nonatomic) UILabel *iconWithTextWord;
@property (retain, nonatomic) UIView *springViewLayer;
@property (nonatomic) BOOL hasShowBubble;
@property (retain, nonatomic) AWESearchFeelGoodDataModel *model;

+ (Class)aAWESearchModuleDOUYINLGAdapterClass;

- (void)awe_themeDidChange:(long long)a0;
- (void)configureUI;
- (BOOL)isOnlySupportLightMode;
- (void)setIsOnlySupportLightMode:(BOOL)a0;
- (long long)preferSearchTheme;
- (void)dismissEntrance;
- (void)showEntrnceViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)dismissPopups;
- (void)updateImageInfo:(id)a0;
- (void)entranceViewTapped;
- (void)bubbleViewTapped;
- (void)iconViewTapped;
- (BOOL)supportIconImageLayerCornerRadius;
- (BOOL)isEcomGoodsSearchType;
- (id)bubbleDefaultText;
- (void)updateImageInfo;
- (void)reMarkSpringViewLayout;
- (BOOL)isGeneralVision;
- (void)adapterSpringViewUI;
- (id)aAWESearchModuleDOUYINLGAdapter;
- (void)dismissTipsPopups;
- (void)resetTipsPopups;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
