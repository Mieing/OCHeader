@class NSString;

@interface AWESearchFeelGoodElementView : UIView <AWESearchFeelGoodElementView>

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ submitActionBlock;
@property (copy, nonatomic) id /* block */ clickContentBlock;
@property (copy, nonatomic) id /* block */ animationEndBlock;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
