@class AWEIMWebImageViewPresenter;

@interface AWEIMMessagePurchasedFansTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMWebImageViewPresenter *imagePresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_addKVO:(id)a0;
- (id)p_placeholderIcon;
- (id)p_liveFansIconURLWithLevel:(long long)a0 context:(id)a1;
- (void).cxx_destruct;

@end
