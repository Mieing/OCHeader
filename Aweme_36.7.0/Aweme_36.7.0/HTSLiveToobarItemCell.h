@class CALayer, UIColor, HTSLiveToolbarItem, UIImageView, UILabel, UIView, RACCompoundDisposable;
@protocol IESLiveCompoundSubscription, IESLiveWebPPlayer, IESLiveSubscription;

@interface HTSLiveToobarItemCell : UICollectionViewCell

@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (nonatomic) BOOL isItemSelect;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIView *customIconView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *customWebpIconView;
@property (retain, nonatomic) UIView *disabledBackground;
@property (retain, nonatomic) RACCompoundDisposable *compoundDisposable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> liveDisposable;
@property (retain, nonatomic) id<IESLiveSubscription> tintColorDispose;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CALayer *backgroundMaskLayer;
@property (retain, nonatomic) UIColor *originTextColor;
@property (retain, nonatomic) UIImageView *reachBadgeImageView;
@property (nonatomic) double itemSize;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) long long morePanelAudienceStyle;
@property (nonatomic) BOOL useStandardPanel;

- (void)didSetAttachingDIContext;
- (id)attachingDIContext;
- (void)itemSelectDidChange:(id)a0;
- (BOOL)needAddMask;
- (void)attachCustomView:(id)a0;
- (void)attachCustomIconView:(id)a0;
- (void)attachCustomWebpIconView:(id)a0;
- (void)setupObserveWithItem:(id)a0;
- (void)disableItem:(BOOL)a0;
- (void)disableCell:(BOOL)a0;
- (void)showCustomWebpImage:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)accessibilityValue;

@end
