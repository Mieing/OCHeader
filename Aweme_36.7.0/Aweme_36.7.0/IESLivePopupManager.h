@class NSMutableArray;

@interface IESLivePopupManager : NSObject

@property (retain, nonatomic) NSMutableArray *popupItems;
@property (copy, nonatomic) id /* block */ allowListFilterBlock;

+ (id)shareManager;

- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)showSimpleDynamicPortraitView:(id)a0 itemType:(long long)a1 backgroundContainer:(id)a2 cornerRadii:(double)a3;
- (void)removeWithItem:(id)a0;
- (void)hideImmediatelyWithType:(long long)a0;
- (void)hideImmediately:(id)a0;
- (BOOL)isItemShowing:(long long)a0;
- (id)itemWithType:(long long)a0;
- (void)removeWithType:(long long)a0;
- (void)removeAllWithType:(long long)a0;
- (void)hideAllPopupItemImmediately;
- (id)getLastPopupItem;
- (void)showSimpleDynamicPortraitView:(id)a0 itemType:(long long)a1 backgroundContainer:(id)a2 animType:(long long)a3;
- (void)hideWithType:(long long)a0;
- (id)presentViewController:(id)a0 hostVC:(id)a1 viewSize:(struct CGSize { double x0; double x1; })a2 backgroundView:(id)a3 landscape:(BOOL)a4 presentHandler:(id /* block */)a5 dismissHandler:(id /* block */)a6;
- (id)presentView:(id)a0 hostVC:(id)a1 viewSize:(struct CGSize { double x0; double x1; })a2 backgroundView:(id)a3 landscape:(BOOL)a4 presentHandler:(id /* block */)a5 dismissHandler:(id /* block */)a6;
- (BOOL)disableExtraLayout;
- (void)showInAutoLayout:(id)a0;
- (void)configItem:(id)a0;
- (void)cleanWithItem:(id)a0;
- (BOOL)rmOptimize;
- (id)allItemsWithType:(long long)a0;
- (BOOL)fixPadHideComplete;
- (BOOL)enableUserManager;
- (id)presentView:(id)a0 hostVC:(id)a1 backgroundView:(id)a2 landscape:(BOOL)a3 presentHandler:(id /* block */)a4 dismissHandler:(id /* block */)a5;
- (void)hide:(id)a0;
- (void).cxx_destruct;
- (void)show:(id)a0;

@end
