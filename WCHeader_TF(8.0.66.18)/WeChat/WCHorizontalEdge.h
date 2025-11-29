@class UIView;

@interface WCHorizontalEdge : NSObject {
    UIView *_view;
    int _type;
    double _offset;
}

- (id)initWithView:(id)a0 type:(int)a1;
- (id /* block */)offsetBy;
- (id)view;
- (double)x;
- (void).cxx_destruct;

@end
