@class NSString, CAShapeLayer, UIView, UILabel, UIButton;
@protocol AWEIMNavigationUnreadViewDelegate;

@interface AWEIMNavigationUnreadView : UIView <AWEIMNavigationUnreadViewProtocol>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *unreadCountView;
@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) struct CGPoint { double x; double y; } unreadViewLocation;
@property (nonatomic) BOOL shouldHideUnreadCount;
@property (nonatomic) long long sceneType;
@property (weak, nonatomic) id<AWEIMNavigationUnreadViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)p_updateUI;
- (id)initWithSceneType:(long long)a0;
- (void)hideUnreadView;
- (void)p_addObserverAndUpdate;
- (void)p_disappear;
- (void)p_appear;
- (BOOL)isNoticeScene:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isShown;
- (void)updateWithCount:(long long)a0;

@end
