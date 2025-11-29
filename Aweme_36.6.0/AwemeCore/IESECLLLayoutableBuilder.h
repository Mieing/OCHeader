@class UIColor, IESECLLContainerBuilder;

@interface IESECLLLayoutableBuilder : NSObject {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    struct CGVector { double dx; double dy; } _offset;
    UIColor *_foregroundColor;
    BOOL _sizeFollows;
    IESECLLContainerBuilder *_parentBuilder;
}

@property (readonly, nonatomic) id /* block */ ll_background;
@property (readonly, nonatomic) id /* block */ ll_overlay;

- (void)inflateSubviewsIntoMap:(id)a0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (id /* block */)background;
- (void).cxx_destruct;
- (id /* block */)foregroundColor;
- (id /* block */)overlay;
- (id /* block */)offset;
- (id /* block */)padding;

@end
