@class NSDictionary, NLELayer_OC, NSString;
@protocol ACCStickerContainerProtocol;

@interface ACCNLELayerView : UIView <ACCStickerContentProtocol>

@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (weak, nonatomic) NLELayer_OC *NLEImageLayer;
@property (retain, nonatomic) NSString *NLEImageLayerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
