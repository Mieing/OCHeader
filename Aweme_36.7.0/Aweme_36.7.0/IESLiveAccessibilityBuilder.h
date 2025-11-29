@class UIAccessibilityElement, NSMutableArray, NSObject;

@interface IESLiveAccessibilityBuilder : NSObject

@property (weak, nonatomic) NSObject *constrctingView;
@property (weak, nonatomic) NSObject *containerView;
@property (retain, nonatomic) UIAccessibilityElement *containerViewPlaceholderElement;
@property (retain, nonatomic) NSMutableArray *elements;
@property (readonly, copy, nonatomic) id /* block */ label;
@property (readonly, copy, nonatomic) id /* block */ calAccessFrame;
@property (readonly, copy, nonatomic) id /* block */ hint;

- (id /* block */)appendElement;
- (id /* block */)appendElementArray;
- (id /* block */)insertElement;
- (id /* block */)insertElementArray;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id /* block */)value;
- (id /* block */)traits;
- (id)initWithAccessibilityContainer:(id)a0;

@end
