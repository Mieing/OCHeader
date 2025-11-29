@class UIView, IESECStoreExtensionAreaDragDownView, IESECButton, IESECGradientView, CALayer, NSString, CAGradientLayer, UILabel;

@interface IESECStoreLiveHeaderLiveInfoView : UIView <IESECLiveCardContainerDelegate> {
    double _lastBottomGradientLayerOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastViewBounds;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayerTop;
@property (retain, nonatomic) CAGradientLayer *gradientLayerBottom;
@property (retain, nonatomic) CAGradientLayer *whiteTransitionLayer;
@property (retain, nonatomic) CALayer *pureWhiteLayer;
@property (retain, nonatomic) IESECButton *muteButton;
@property (retain, nonatomic) IESECGradientView *liveNativeGradientView;
@property (retain, nonatomic) UILabel *liveTitleLabel;
@property (retain, nonatomic) UIView *cardContainer;
@property (retain, nonatomic) IESECStoreExtensionAreaDragDownView *dragDownView;
@property (nonatomic) double liveInfoBottomOffset;
@property (nonatomic) double gradientLayerBottomHeight;
@property (nonatomic) BOOL hideWhiteTransitionLayer;
@property (nonatomic) double bottomPureWhiteLayerHeight;
@property (nonatomic) BOOL hideTopTransitionLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)whetherCanShow;
- (void)cardContainerShouldShowWithCard:(id)a0 cardWrapper:(id)a1;
- (void)cardContainerShouldRemove;
- (id)pluginCardWrapper;
- (void)moveBottomGradientLayer:(double)a0;
- (void)setSubviewHidden:(BOOL)a0;
- (void)configBottomGradientLayers:(double)a0;
- (void)configTopGradientLayer;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
