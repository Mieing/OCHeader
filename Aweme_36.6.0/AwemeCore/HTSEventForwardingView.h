@class NSString, IESLiveViewLevelController;

@interface HTSEventForwardingView : UIView <IESLiveHierarchyContainerView>

@property (nonatomic) BOOL disableForwarding;
@property (nonatomic) BOOL isHitTestEndEditing;
@property (retain, nonatomic) IESLiveViewLevelController *levelController;
@property (copy, nonatomic) NSString *levelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubview:(id)a0 identifier:(id)a1;
- (id)initWithLevelName:(id)a0 sortedLevels:(id)a1;
- (void)setHitTestEndEditing:(BOOL)a0;
- (void)addSubview:(id)a0 identifier:(id)a1 reuse:(BOOL)a2;
- (id)reuseViewForIdentifier:(id)a0;
- (id)getReuseSubviews;
- (id)collectConstraintsRelatedToView:(id)a0;
- (void)replicateParentConstraints:(id)a0 fromView:(id)a1 fromParent:(id)a2 toParent:(id)a3;
- (void)setupReuseSubviews:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)containsSubview:(id)a0;

@end
