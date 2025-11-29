@class UIView;

@interface MMWebViewPlugin_UI : MMWebViewPluginBase

@property (nonatomic) BOOL hasLongPress;
@property (nonatomic) double lastScrollOffset;
@property (nonatomic) double fullHeight;
@property (nonatomic) double webBottomBarHeight;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) long long didStartLoadTime;
@property (nonatomic) BOOL isAnimate;
@property (weak, nonatomic) UIView *navigationBarView;

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)clearScrollBackgroundColor;
- (BOOL)handleNewWebBarBottomEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleTopBarAlphaByEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
