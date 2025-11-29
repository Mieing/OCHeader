@class UIImage, NSString;

@interface IESECLLImageBuilder : IESECLLLayoutableBuilder {
    UIImage *_image;
    BOOL _resizable;
    long long _contentMode;
    NSString *_identifier;
    double _width;
    double _height;
}

@property (readonly, copy, nonatomic) id /* block */ resizable;
@property (readonly, copy, nonatomic) id /* block */ aspectRatio;
@property (readonly, copy, nonatomic) id /* block */ width;
@property (readonly, copy, nonatomic) id /* block */ height;

- (void)inflateSubviewsIntoMap:(id)a0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (id)initWithIdentifier:(id)a0 withImage:(id)a1;
- (void).cxx_destruct;

@end
