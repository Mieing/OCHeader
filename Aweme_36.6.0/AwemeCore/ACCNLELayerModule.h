@class ACCNLEImageWrapper, NLELayer_OC, UIView;
@protocol ACCStickerContentProtocol;

@interface ACCNLELayerModule : NSObject

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *layerView;
@property (weak, nonatomic) NLELayer_OC *layer;
@property (weak, nonatomic) ACCNLEImageWrapper *NLEImageWrapper;
@property (copy, nonatomic) id /* block */ executor;

- (id)copy;
- (void).cxx_destruct;

@end
