@protocol YataInstanceInterface;

@interface IESECYataInstanceUtil : NSObject

@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;

- (id)subviewWithSliceView:(id)a0 andSliceKey:(id)a1;
- (id)yataNodeWithMatchVO:(id)a0;
- (id)subviewWithYataNode:(id)a0 andSliceKey:(id)a1;
- (void).cxx_destruct;

@end
