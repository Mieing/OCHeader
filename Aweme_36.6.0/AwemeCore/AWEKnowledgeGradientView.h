@class NSArray;

@interface AWEKnowledgeGradientView : UIView <AWEKnowledgeGradientViewProtocol, AEKMediaGradientViewProtocol> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ _locations;
    void /* unknown type, empty encoding */ _startPoint;
    void /* unknown type, empty encoding */ _endPoint;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, copy) NSArray *locations;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
