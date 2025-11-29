@class NSString, IESECLLShapeView;

@interface IESECLLShapeBuilder : IESECLLLayoutableBuilder {
    NSString *_identifier;
    IESECLLShapeView *_shapeView;
    double _width;
    double _height;
}

@property (readonly, copy, nonatomic) id /* block */ width;
@property (readonly, copy, nonatomic) id /* block */ height;
@property (readonly, copy, nonatomic) id /* block */ stroke;

- (void)inflateSubviewsIntoMap:(id)a0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)setupShapeLayer;

@end
