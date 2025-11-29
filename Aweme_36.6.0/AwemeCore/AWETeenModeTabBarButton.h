@class UITapGestureRecognizer, UIViewController, NSString;
@protocol AWETeenModeTabBarButtonDelegate;

@interface AWETeenModeTabBarButton : UIButton <AWETeenModeTabBarButtonProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGes;
@property (weak, nonatomic) id<AWETeenModeTabBarButtonDelegate> delegate;
@property (nonatomic) long long type;
@property (nonatomic) long long index;
@property (nonatomic) long long validIndex;
@property (nonatomic) long long status;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewController:(id)a1 type:(long long)a2;

- (void)onTouchUpInside;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
