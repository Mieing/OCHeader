@class UIView, NSString, NSArray, UIButton, IESECGCDTimer, UIVisualEffectView, IESECShopMarqueeContentView, IESECStorePageContext;

@interface IESECShopMarqueeView : UIView <IESECShopMarqueeProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESECShopMarqueeContentView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (copy, nonatomic) NSArray *models;
@property (nonatomic) long long currentLoopIndex;
@property (retain, nonatomic) IESECStorePageContext *context;
@property (nonatomic) BOOL preloadAllAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTimer;
- (void)trackWithEventName:(id)a0 extraParams:(id)a1;
- (id)initWithContext:(id)a0 models:(id)a1;
- (void)startAnimationShowOrHide:(BOOL)a0;
- (void)handleMarqueeAnimationIsShow:(BOOL)a0;
- (void)preloadNextAvatarImage;
- (void)updateLoopIndex;
- (void)closeMarquee:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)show;
- (void)setupUI;

@end
