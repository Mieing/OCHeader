@class NSMutableDictionary;

@interface AWEPOIGuideAnimationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *showingMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isShowingAnimationViewWithIdentifier:(id)a0;
- (id)showingKeyWithIdentifier:(id)a0;
- (void)showSwipeGuideWithDirection:(unsigned long long)a0 type:(unsigned long long)a1 inView:(id)a2 customText:(id)a3 withIdentifier:(id)a4;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
