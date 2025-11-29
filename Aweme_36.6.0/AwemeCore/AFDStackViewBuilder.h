@class UIStackView;

@interface AFDStackViewBuilder : NSObject

@property (retain, nonatomic) UIStackView *stackView;

+ (id)withViews:(id)a0;

- (id /* block */)addToView;
- (id /* block */)distribution;
- (void).cxx_destruct;
- (id /* block */)axis;
- (id /* block */)alignment;
- (id)build;
- (id /* block */)spacing;
- (id /* block */)margins;
- (id /* block */)layoutMarginsRelativeArrangement;

@end
