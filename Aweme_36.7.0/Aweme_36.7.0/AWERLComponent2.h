@class NSString, AWERLVirtualView, NSMutableArray;
@protocol AWERLComponent2Delegate;

@interface AWERLComponent2 : NSObject <AWERLComponentOverride>

@property (weak, nonatomic) AWERLComponent2 *rl_superComponent;
@property (retain, nonatomic) NSMutableArray *rl_SubComponents;
@property (copy, nonatomic) NSString *rl_componentName;
@property (weak, nonatomic) id<AWERLComponent2Delegate> delegate;
@property (nonatomic) BOOL rl_needsUpdate;
@property (nonatomic) BOOL rl_needsBuildSubComponents;
@property (nonatomic) BOOL rl_needsBuildVirtualView;
@property (retain, nonatomic) AWERLVirtualView *rl_cachedVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildVirtualView:(id)a0;
- (void)setNeedsUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (id)buildSubComponents;
- (void)animateTo:(id)a0 event:(id /* block */)a1 completion:(id /* block */)a2;
- (void)debugBuildDescriptions:(id)a0;
- (id)rl_subComponents;
- (void)removeAllSubComponents;
- (void)addSubComponent:(id)a0;
- (void)removeSubComponent:(id)a0;
- (void)changeSubComponents:(id)a0;
- (void)debugHierarchyDescriptions;
- (id)componentName;
- (void).cxx_destruct;
- (id)init;
- (void)setComponentName:(id)a0;

@end
