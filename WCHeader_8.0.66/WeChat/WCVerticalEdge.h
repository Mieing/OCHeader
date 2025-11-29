@class UIView;

@interface WCVerticalEdge : NSObject {
    UIView *_view;
    int _type;
    double _offset;
}

- (id)initWithView:(id)a0 type:(int)a1;
- (id /* block */)offsetBy;
- (id)view;
- (double)y;
- (void).cxx_destruct;

@end
