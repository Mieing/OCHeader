@class ACCSideslipPropPickIndicatorView, NSString, CAGradientLayer, NSMapTable, UIView, UILabel, UIButton;
@protocol ACCSideslipPropPickCollectionViewProtocol;

@interface ACCSideslipPropViewContainer : NSObject <ACCAIGCSideslipViewContainerProtocol, ACCRecorderSideslipViewContainerProtocol, ACCRecorderSideslipViewContainerSetterProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipPropViewContainerBaseSetterProtocol>

@property (weak, nonatomic) UIView *retryView;
@property (weak, nonatomic) UIView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIButton *favoriteButton;
@property (readonly, weak, nonatomic) UIButton *exitButton;
@property (readonly, weak, nonatomic) UIButton *discoverButton;
@property (readonly, weak, nonatomic) UILabel *currentPropNameLabel;
@property (readonly, weak, nonatomic) ACCSideslipPropPickIndicatorView *indicatorView;
@property (readonly, weak, nonatomic) CAGradientLayer *maskLayer;
@property (readonly, weak, nonatomic) CAGradientLayer *expouseMaskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *viewMapTable;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) UIView *pickErrorView;
@property (readonly, weak, nonatomic) UIView *pickView;
@property (readonly, weak, nonatomic) UIView<ACCSideslipPropPickCollectionViewProtocol> *pickCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerForKey:(id)a0;
- (void)setExitButton:(id)a0;
- (void)setLayer:(id)a0 forKey:(id)a1;
- (void)setPickView:(id)a0;
- (id)keyWith:(id)a0;
- (void)p_setObj:(id)a0 forKey:(id)a1;
- (id)p_objForKey:(id)a0;
- (void)setPickErrorView:(id)a0;
- (void)setPickCollectionView:(id)a0;
- (void)setDiscoverButton:(id)a0;
- (void)setCurrentPropNameLabel:(id)a0;
- (void)setExpouseMaskLayer:(id)a0;
- (id)viewForKey:(id)a0;
- (void).cxx_destruct;
- (void)setView:(id)a0 forKey:(id)a1;
- (void)setContainerView:(id)a0;
- (void)setIndicatorView:(id)a0;
- (void)setMaskLayer:(id)a0;
- (void)setFavoriteButton:(id)a0;

@end
