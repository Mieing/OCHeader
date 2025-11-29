@class UIView;

@interface RTVInviteListSearchPlugin : RTVListSearchPlugin

@property (readonly, nonatomic) long long uiStyle;
@property (readonly, nonatomic) UIView *backgroundView;

- (void)__createComponents;
- (void)updateUIStyle:(long long)a0;
- (void)pluginDidLayoutSubviews;
- (void).cxx_destruct;

@end
