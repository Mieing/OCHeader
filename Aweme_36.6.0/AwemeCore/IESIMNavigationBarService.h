@class NSString;

@interface IESIMNavigationBarService : HTSService <IESIMNavigationBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createNavigationBar;
- (id)imageForButtonPresetStyle:(unsigned long long)a0;
- (id)naviBarMainTitleFont;
- (id)naviBarMainTitleColor;
- (id)naviBarTitleFont;
- (id)naviBarTitleColor;
- (double)naviBarButtonHeight;
- (double)naviBarRightFixMargin;
- (double)naviBarLeftFixMargin;
- (void)setNaviBarRightFixMargin:(double)a0;
- (void)setNaviBarLeftFixMargin:(double)a0;
- (void)view:(id)a0 setDisableNavigationbarBringToFront:(BOOL)a1;
- (id)p_aweNaviBarButtonPresetStyleWithIESIMStyle:(unsigned long long)a0;

@end
