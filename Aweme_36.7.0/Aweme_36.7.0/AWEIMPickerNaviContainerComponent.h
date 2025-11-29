@class NSString, UIView;

@interface AWEIMPickerNaviContainerComponent : AWEIMComponentBase <AWEIMPickerNaviContainerInterface>

@property (retain, nonatomic) UIView *naviBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)navigationBarBackgroundView;
- (void)bringNaviBarToFront;
- (double)navigationBarHeight;
- (void).cxx_destruct;
- (void)createUI;

@end
