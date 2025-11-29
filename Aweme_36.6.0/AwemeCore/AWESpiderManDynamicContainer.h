@class NSString, BDPUniqueID, UIView;
@protocol BDXViewContainerProtocol;

@interface AWESpiderManDynamicContainer : UIView

@property (nonatomic) BOOL hasFP;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *containerTag;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)containerTypeString;

@end
