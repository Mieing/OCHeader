@class NSMutableDictionary;

@interface BDXLynxOverlayGlobalManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *levelContainers;

+ (id)getAllVisibleOverlay;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowBounds;
+ (id)sharedInstance;

- (id)topContainer;
- (id)pageContainer;
- (id)modalContainer;
- (id)windowContainer;
- (id)getTopViewControllerWithMode:(unsigned long long)a0 customViewController:(id)a1;
- (long long)identifierWithModel:(unsigned long long)a0 withContainer:(id)a1;
- (id)levelContainerAt:(long long)a0 withModel:(unsigned long long)a1 withContainer:(id)a2;
- (void)sortViewsWithModel:(unsigned long long)a0 withContainer:(id)a1;
- (void)destoryOverlayView:(id)a0 atLevel:(long long)a1 withMode:(unsigned long long)a2 customViewController:(id)a3;
- (void)destoryUnattachedOverlay:(id)a0;
- (id)showOverlayView:(id)a0 atLevel:(long long)a1 withMode:(unsigned long long)a2 customViewController:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
