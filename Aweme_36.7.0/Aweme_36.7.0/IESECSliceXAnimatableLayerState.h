@class CALayer, NSString;

@interface IESECSliceXAnimatableLayerState : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id oldValue;

- (id)initWithLayer:(id)a0 keyPath:(id)a1;
- (void).cxx_destruct;

@end
