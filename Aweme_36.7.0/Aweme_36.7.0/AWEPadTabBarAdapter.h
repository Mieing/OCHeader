@class NSString;

@interface AWEPadTabBarAdapter : HTSService <AWEPadTabBarAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)tabBarCompactModeBlackList;

- (BOOL)shouldCompactMode;
- (BOOL)shouldCompactModeWithReferString:(id)a0;
- (BOOL)shouldShowElementOnCompactMode;
- (BOOL)shouldShowClearOnCompactMode;
- (BOOL)shouldOnCompactModeAndShowElementWithSize:(struct CGSize { double x0; double x1; })a0 navSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldOnCompactModeWithSize:(struct CGSize { double x0; double x1; })a0 navSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)useNewBreakPoint;
- (BOOL)isBlackCompactModeReferWithString:(id)a0;
- (id)weakTarget;

@end
