@class NSString, NSMutableDictionary;

@interface AWEPadFollowListContainerAdapter : NSObject <AWEPadFollowListContainerAdapter>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastContainerFrame;
@property (retain, nonatomic) NSMutableDictionary *reloadViewControllerFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)reloadSelectedViewControllerIfNeed:(id)a0 index:(long long)a1;
- (void)markAllViewControllerNeedReload;
- (void).cxx_destruct;
- (void)dynamicLayout;
- (id)weakTarget;

@end
