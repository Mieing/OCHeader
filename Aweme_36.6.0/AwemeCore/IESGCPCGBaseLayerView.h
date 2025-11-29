@class NSString;

@interface IESGCPCGBaseLayerView : UIView <IESGCPCGLayerViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showItemView:(id)a0;
- (void)convertToOrientation:(long long)a0;
- (void)clear;
- (void)addSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
