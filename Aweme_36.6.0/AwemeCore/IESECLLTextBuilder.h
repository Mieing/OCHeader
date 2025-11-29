@class NSString, UIFont;

@interface IESECLLTextBuilder : IESECLLLayoutableBuilder {
    NSString *_text;
    UIFont *_textFont;
    NSString *_identifier;
    double _width;
    double _height;
}

@property (readonly, copy, nonatomic) id /* block */ bold;
@property (readonly, copy, nonatomic) id /* block */ font;

- (id)initWithIdentifier:(id)a0 text:(id)a1;
- (void)inflateSubviewsIntoMap:(id)a0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (void).cxx_destruct;

@end
