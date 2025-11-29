@class ZZSeparatorModel, UIView;

@interface ZZSeparatorChainModel : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) ZZSeparatorModel *separatorModel;

- (id)initWithView:(id)a0 andPosition:(long long)a1;
- (id /* block */)offset;
- (id /* block */)color;
- (id /* block */)beginAt;
- (id /* block */)length;
- (id /* block */)endAt;
- (id /* block */)borderWidth;
- (void).cxx_destruct;

@end
