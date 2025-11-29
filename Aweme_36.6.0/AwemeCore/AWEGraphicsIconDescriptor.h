@class UIColor;

@interface AWEGraphicsIconDescriptor : AWEGraphicsLayerDescriptor

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } offset;
@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;

@end
