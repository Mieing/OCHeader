@class NSString;

@interface IESECLLItemBuilder : IESECLLLayoutableBuilder {
    NSString *_identifier;
    double _width;
    double _height;
    id /* block */ _componentBuilder;
    id /* block */ _measureCallback;
}

@property (readonly, copy, nonatomic) id /* block */ viewBuilder;
@property (readonly, copy, nonatomic) id /* block */ measure;
@property (readonly, copy, nonatomic) id /* block */ width;
@property (readonly, copy, nonatomic) id /* block */ height;

- (void)inflateSubviewsIntoMap:(id)a0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
