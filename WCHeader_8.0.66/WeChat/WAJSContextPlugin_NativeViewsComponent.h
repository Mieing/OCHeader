@class NSString, NSMutableDictionary, UIView;

@interface WAJSContextPlugin_NativeViewsComponent : NSObject <WAJSContextPlugin_NativeViewsRootViewProtocol>

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIView *rootChildView;
@property (retain, nonatomic) NSMutableDictionary *nativeViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootView:(id)a0;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)getChildViewsByClass:(Class)a0;
- (id)getChildViews;
- (id)getSafeNativeViewsWritable:(BOOL)a0;
- (void).cxx_destruct;

@end
