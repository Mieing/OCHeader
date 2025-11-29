@class NSString;

@interface AWEKefuGuideContainerView : UIView <AWEKefuViewHierarchyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)viewHierarchy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
