@class UIView, NSMutableDictionary, NSMutableSet;

@interface MMViewLayoutManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *viewToItemMap;
@property (retain, nonatomic) NSMutableDictionary *typeToItemArrayMap;
@property (retain, nonatomic) NSMutableDictionary *typeToItemListenerArrayMap;
@property (retain, nonatomic) NSMutableSet *topLevelItems;
@property (retain, nonatomic) NSMutableSet *dirtyItems;
@property (retain, nonatomic) NSMutableSet *parentsForDirtyItems;
@property (weak, nonatomic) UIView *topLevelView;

- (id)initWithTopLevelView:(id)a0;
- (void)dealloc;
- (void)registerView:(id)a0 withType:(long long)a1;
- (void)registerLayoutDependencyForView:(id)a0 dependentType:(long long)a1 initCallback:(id /* block */)a2;
- (void)registerLayoutDependencyForView:(id)a0 dependentTypes:(id)a1 initCallback:(id /* block */)a2;
- (void)registerLayoutDependencyForView:(id)a0 dependentType:(long long)a1;
- (void)registerLayoutDependencyCallback:(id /* block */)a0 dependentView:(id)a1;
- (void)registerLayoutDependencyForView:(id)a0 dependentTypes:(id)a1;
- (void)registerLayoutDependencyForView:(id)a0 dependentView:(id)a1;
- (void)layoutAllViews;
- (void)layoutAllDirtyViews;
- (void)notifyLayoutChanges:(id)a0;
- (void)setNeedsNotifyLayoutChanges:(id)a0;
- (void)setNeedsLayout:(id)a0;
- (void)notifyRelayoutForItems:(id)a0 startPriority:(unsigned int)a1 forceLayout:(BOOL)a2;
- (void)notifyRelayoutForItems:(id)a0 currentUpdatedItems:(id)a1 startPriority:(unsigned int)a2 forceLayout:(BOOL)a3;
- (void)unregisterView:(id)a0;
- (id)getOrCreateItemFromView:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
