@class ZZCornerModel, UIView;

@interface ZZCornerChainModel : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) ZZCornerModel *cornerModel;

- (id)initWithView:(id)a0 andPosition:(long long)a1;
- (id /* block */)radius;
- (id /* block */)color;
- (id /* block */)borderWidth;
- (void).cxx_destruct;

@end
