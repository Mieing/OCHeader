@class UIView;

@interface WCAnchor : NSObject {
    UIView *_view;
    int _type;
    struct CGPoint { double x; double y; } _offset;
}

- (id)initWithView:(id)a0 type:(int)a1;
- (id /* block */)offsetBy;
- (id)view;
- (struct CGPoint { double x0; double x1; })point;
- (void).cxx_destruct;

@end
